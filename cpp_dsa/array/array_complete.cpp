#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int x;

    do {
        cout << "What operation do you want to perform?" << endl;
        cout << "Press '1' to print the default array." << endl;
        cout << "Press '2' to input and print array elements." << endl;
        cout << "Press '3' to calculate the sum of array elements." << endl;
        cout << "press '4' to find maximum and minimum of the array" << endl;
        cout << "press '5' to print array element with indexing."<<endl; 
        cout << "press '6' to sort array in ascending and descending " << endl;
        cout << "press '7' to merge two arrays: " << endl;
        cout << "press '8' fo deletion of array: " << endl;
        cout << "press '9' to print matrix of 3*3 array elements:" << endl;
        cout << "Press '10' to exit." << endl;
        cout << "\nEnter your choice: ";
        cin >> x;

        switch (x) {
            case 1: {
                system("cls");
                int arr[5] = {213, 3, 4, 45, 43};
                cout << "Printing default array:" << endl;
                for (int i = 0; i < 5; i++) {
                    cout << arr[i] << endl;
                }
                getch();
                system("cls");
                break;
            }
            case 2: {
                system("cls");
                int array[5];
                cout << "Taking array elements:" << endl;
                cout << "Enter 5 array elements:" << endl;
                for (int i = 0; i < 5; i++) {
                    cin >> array[i];
                }
                cout << "\nPrinting array elements:" << endl;
                for (int i = 0; i < 5; i++) {
                    cout << array[i] << endl;
                }
                getch();
                system("cls");
                break;
            }
            case 3: {
            	system("cls");
                int array[5];
                cout << "To calculate sum of array elements, enter 5 elements:" << endl;
                cout << "Enter 5 array elements:" << endl;
                for (int i = 0; i < 5; i++) {
                    cin >> array[i];
                }
                int sum = 0;
                for (int i = 0; i < 5; i++) {
                    sum += array[i];
                }
                cout << "\nTotal sum of whole array elements: " << sum << endl <<endl;
                getch();
                system("cls");
                break;
            }
            case 4:{
            	cout << "hello";
            	break;
			}
			case 5: {
				system("cls");
				int arr[] = {10, 20, 30, 40, 50};
				int n = sizeof(arr) / sizeof(arr[0]);
				cout << "suppose this is an array : {10, 20, 30, 40, 50};" << endl;
				// Print array elements with their index
				for (int i = 0; i < n; i++) {
				cout << "Element at index " << i << " is  " << arr[i] << endl;}
				getch();
				system("cls");
				break;
			}
			case 6:{
            	cout << "this is case 5 \n\n" ;
				break;
			}
			case 7: {
				cout << "this is case 6 \n\n";
				break;
			}
			case 8: {
				cout << "this is case 6 \n\n";
				break;
			}
			case 9:{
				#define rows 3
				#define cols 3
				int matrix[rows][cols];

    // Inputting values into the matrix
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    // Displaying the matrix
    cout << "The entered matrix is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
				break;
			}
            case 10:
                cout << "programme Exiting successfully..." << endl;
                break;
            default:
                cout << "Invalid operation. Please retry." << endl;
        }
    } while (x != 10);

    return 0;
}

