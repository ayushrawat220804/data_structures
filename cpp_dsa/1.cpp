#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10, 5, 8, 20, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = INT_MIN; // Initialize max to smallest possible value
    int min = INT_MAX; // Initialize min to largest possible value

    // Finding maximum and minimum elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;

    return 0;
}

