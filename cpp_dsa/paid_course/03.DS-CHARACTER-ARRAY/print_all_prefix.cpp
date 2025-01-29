#include <iostream>
using namespace std;

void printallprefixes(char str[]) {
    for (int end = 0; str[end] != '\0'; end++) { // Outer loop for the prefix length
        for (int start = end; start <= end; start++) { // Inner loop to print each character in the prefix
            cout << str[start];
        }
        cout << endl;
    }
}

int main() {
    system("cls");
    char str[] = "abcde";
    printallprefixes(str);
    return 0;
}
