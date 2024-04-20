#include <iostream>
#define ROWS 3
#define COLS 3
using namespace std;

int main() {
//    int inputRows, inputCols;
//    cout << "Enter the number of rows: ";
//    cin >> inputRows;
//    cout << "Enter the number of columns: ";
//    cin >> inputCols;

    int matrix[ROWS][COLS];

    // Inputting values into the matrix
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> matrix[i][j];
        }
    }

    // Displaying the matrix
    cout << "The entered matrix is:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

