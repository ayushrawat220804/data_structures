#include <iostream>
#include <vector>

class Student {
private:
    std::string m_sName;
    int m_iGrade;

public:
    Student(std::string sName, int iGrade);
    std::string GetName() const;
    int GetGrade() const;
    std::string CalculateGradeLetter() const;
    std::string HasUserPassed();
};

Student::Student(std::string sName, int iGrade) : m_sName(sName), m_iGrade(iGrade) {}

std::string Student::GetName() const {
    return m_sName;
}

int Student::GetGrade() const {
    return m_iGrade;
}

std::string Student::CalculateGradeLetter() const {
    if (m_iGrade < 10) {
        return "F";
    } else if (m_iGrade < 30) {
        return "E";
    } else if (m_iGrade < 50) {
        return "D";
    } else if (m_iGrade < 70) {
        return "C";
    } else if (m_iGrade < 80) {
        return "B";
    } else if (m_iGrade < 90) {
        return "A";
    } else if (m_iGrade <= 100) {
        return "A*";
    } else {
        return "Invalid";
    }
}

std::string Student::HasUserPassed() {
    std::string grade = CalculateGradeLetter();
    if (grade == "F") {
        return "Fail";
    }
    return "Passed";
}

int main() {
    std::vector<Student> students;

    // Add student data (you can input this dynamically if needed)
    students.push_back(Student("Alice", 85));
    students.push_back(Student("Bob", 72));
    students.push_back(Student("Charlie", 60));
    // ... add more students

    // Calculate average grade
    double totalGrade = 0.0;
    for (const auto& student : students) {
        totalGrade += student.GetGrade();
    }
    double averageGrade = totalGrade / students.size();

    // Display results
    std::cout << "Average grade: " << averageGrade << std::endl;
    std::cout << "Grade letter: " << Student::CalculateGradeLetter(averageGrade) << std::endl;

    return 0;
}

