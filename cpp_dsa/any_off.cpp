#include <iostream>
#include <algorithm>  // Include algorithm for any_of

using namespace std;

int main() {
    cout << "Program to use any_of function" << endl;

    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "You entered: " << s << endl;

    if (any_of(s.begin(), s.end(), ::isdigit)) { // ::isdigit check the string does it contain any digit
        cout << "\nYes, the given string has some digits." << endl;
    } else {
        cout << "\nNo, the given string doesn't have any digits." << endl;
    }

    return 0;
}

