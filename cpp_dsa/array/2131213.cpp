#include <iostream>
using namespace std;

int main() {
    int x;

    do {
        system("cls"); // Clear the screen

        cout << "What operation do you want to perform?" << endl;
        cout << "Press '1' to print the default array." << endl;
        cout << "Press '2' to input and print array elements." << endl;
        cout << "Press '3' to calculate the sum of array elements." << endl;
        cout << "Press '4' to exit." << endl;
        cout << "Enter your choice: ";
        cin >> x;

        if (x == 1) {
            int arr[5] = {213, 3, 4, 45, 43};
            cout << "Printing default array:" << endl;
            for (int i = 0; i < 5; i++) {
                cout << arr[i] << endl;
            }
        } else if (x == 2) {
            int array[5];
            cout << "Taking array elements:" << endl;
            cout << "Enter 5 array elements:" << endl;
            for (int j = 0; j < 5; j++) {
                cin >> array[j];
            }
            cout << "\nPrinting array elements:" << endl;
            for (int j = 0; j < 5; j++) {
                cout << array[j] << endl;
            }
        } else if (x == 3) {
            int array[5];
            cout << "To calculate array elements, enter 5 elements:" << endl;
            cout << "Enter 5 array elements:" << endl;
            for (int j = 0; j < 5; j++) {
                cin >> array[j];
            }
            int sum = 0;
            for (int j = 0; j < 5; j++) {
                sum += array[j];
            }
            cout << "\nTotal sum of whole array elements: " << sum << endl;
        } else if (x == 4) {
            cout << "Exiting program." << endl;
        } else {
            cout << "Invalid operation. Please retry." << endl;
        }
    } while (x != 4);

    return 0;
}

