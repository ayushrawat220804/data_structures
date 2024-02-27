#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (number >= 0) {
        // Add positive numbers to the sum
        sum += number;

        // Take input again if the number is positive
        cout << "Enter a number: ";
        cin >> number;
    }

    cout << "\nThe sum is " << sum << endl;
    return 0;
}

