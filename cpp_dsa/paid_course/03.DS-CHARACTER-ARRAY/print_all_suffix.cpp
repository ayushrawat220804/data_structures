#include <iostream>
using namespace std;

void printallsuffixes(char str[]) {
    for (int start = 0; str[start] != '\0'; start++) { // Outer loop for the suffix start
        for (int end = start; str[end] != '\0'; end++) { // Inner loop to print each character in the suffix
            cout << str[end];
        }
        cout << endl;
    }
}

int main() {
    system("cls");
    char str[] = "abcde";
    printallsuffixes(str);
    return 0;
}
