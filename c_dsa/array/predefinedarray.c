//predefined array in c language
#include <stdio.h>
int main() {
    // Declare and initialize an array with predefined values
    int predefinedArray[] = {10, 20, 30, 40, 50};
    // Access and print the values
    int i;
    for (i = 0; i < 5; ++i) {
        printf("Element %d: %d\n", i, predefinedArray[i]);
    }
    return 0;
}
