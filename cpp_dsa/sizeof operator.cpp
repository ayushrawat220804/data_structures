#include <iostream>
using namespace std;

int main() {
    int arr[] = {51, 1232, 45213, 34, 52};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of arr: " << sizeof(arr) << " bytes" << endl;
    cout << "Number of elements in arr: " << sizeOfArray << endl;

    return 0;
}

