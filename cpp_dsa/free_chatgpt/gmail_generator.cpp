#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>

std::string generateRandomEmail() {
    std::string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string specialCharacters = "!#$%&'*+/=?^_`{|}~-";
    std::string email;

    int emailLength = rand() % 10 + 5; // Email length between 5 and 15 characters

    for (int i = 0; i < emailLength; ++i) {
        int choice = rand() % 3;
        if (choice == 0) {
            // Add a random letter
            email += characters[rand() % characters.size()];
        } else if (choice == 1) {
            // Add a random digit
            email += std::to_string(rand() % 10);
        } else {
            // Add a random special character
            email += specialCharacters[rand() % specialCharacters.size()];
        }
    }

    email += "@gmail.com";
    return email;
}

std::string extractUsername(const std::string& email) {
    return email.substr(0, email.find("@"));
}

std::string generateFirstName() {
    std::string names[] = {"John", "Jane", "Alex", "Chris", "Sam", "Taylor", "Jordan", "Morgan", "Casey", "Riley"};
    int index = rand() % (sizeof(names) / sizeof(names[0]));
    return names[index];
}

std::string generateGender() {
    return (rand() % 2 == 0) ? "Male" : "Female";
}

std::string generateDateOfBirth() {
    int month = rand() % 12 + 1; // Month between 1 and 12
    int day = rand() % 28 + 1;   // Day between 1 and 28
    int year = (rand() % 7 + 2000); // Year between 2000 and 2006
    return std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);
}

int main() {
    srand(static_cast<unsigned>(time(0)));

    const int numberOfEmails = 10;
    const std::string defaultPassword = "Xmn@30_youtube";

    // Open the file in append mode to prevent overwriting
    std::ofstream outputFile("emails.txt", std::ios::app);
    if (!outputFile) {
        std::cerr << "Error: Unable to open file for writing." << std::endl;
        return 1;
    }

    // Adding a separator line at the beginning of the new batch of data
    outputFile << "//////////////////////////////////////////////////////////////\n";
    outputFile << "New Batch of Emails Generated:\n";
    outputFile << "##############################################################\n\n";

    for (int i = 0; i < numberOfEmails; ++i) {
        std::string email = generateRandomEmail();
        std::string username = extractUsername(email);
        std::string firstName = generateFirstName();
        std::string gender = generateGender();
        std::string dob = generateDateOfBirth();
        
        outputFile << "First Name: " << firstName << "\nUsername: " << username << "\nEmail: " << email << "\nPassword: " << defaultPassword << "\nGender: " << gender << "\nDate of Birth: " << dob << "\n\n";
        
        // Adding a separator after each email data block if needed
        if (i < numberOfEmails - 1) {
            outputFile << "------------------------------\n";
        }
    }

    // Adding a final separator after all data
    outputFile << "##############################################################\n";
    outputFile << "End of Current Batch\n";
    outputFile << "//////////////////////////////////////////////////////////////\n";

    outputFile.close();
    std::cout << "Emails, usernames, first names, genders, dates of birth, and passwords have been saved to emails.txt" << std::endl;

    return 0;
}
