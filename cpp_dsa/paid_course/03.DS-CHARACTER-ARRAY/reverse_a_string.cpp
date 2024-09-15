#include <iostream>
using namespace std;

// Function to calculate the length of a string (char array)
int length(char input[]) {
    int count = 0;  // Initialize counter to 0
    // Iterate through each character of the array until the null-terminator is reached
    for (int i = 0; input[i] != '\0'; i++) {
        count++;  // Increment the count for each character
    }
    return count;  // Return the total number of characters (length of the string)
}

// Function to reverse a given string (char array)
void reverse(char input[]) {
    int start = 0;  // Starting index of the string
    int end = length(input) - 1;  // Ending index (last character before null-terminator)

    // Swap characters from start to end until they meet in the middle
    while (start < end) {
        swap(input[start], input[end]);  // Swap the characters at start and end
        start++;  // Move start pointer towards the middle
        end--;  // Move end pointer towards the middle
    }
}

int main() {
    char name[100];
    cout << "Enter a string: ";
    cin.getline(name, 100);
    cout << "Entered string: " << name;
    cout << "\nLength of string: " << length(name);
    reverse(name);    
    cout << "\nReversed string: " << name;
    return 0;
}

