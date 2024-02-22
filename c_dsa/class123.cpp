#include <iostream>
using namespace std;
class student { // Assuming 5 subjects
public:
	int marks[5];
    void setMarks(int m[]){
        for (int i = 0; i < 5; i++){
            marks[i] = m[i];
        }
    }
    float calculatepercentage(){
        int totalMarks = 0;
        for (int i = 0; i < 5; i++){
            totalMarks += marks[i];
        }
        return (float(totalMarks) / 5);
    }
};
int main(){ 
    int student1marks[] ={80, 85, 90, 75, 88};
    int student2marks[] ={80, 85, 90, 75, 88};
    student stu1;
    student stu2;
    stu1.setMarks(student1marks);
    stu2.setMarks(student2marks);
    cout << "student1marks[] ={80, 85, 90, 75, 88}\nstudent1marks[] ={80, 85, 90, 75, 88}" << endl << endl;
    cout << "Student 1 Percentage: " << stu1.calculatepercentage() << "%" << endl;
    cout << "Student 2 Percentage: " << stu2.calculatepercentage() << "%" << endl;
    return 0;
}

