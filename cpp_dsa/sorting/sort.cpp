#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    system("cls");
    int array[10];
    cout << "enter 10 array elements . . . " << endl;
    for (int i = 0; i < 10; i++){
        cin >> array[i];
    }
    system("cls");
    // sort.beign(array), sort.end(array);
    cout << "arrays before sorting . . . \n";
    for (int i = 0; i < 10; i++){
        cout << " " << array[i];
    }
    sort(begin(array), end(array));
    cout << "\n\narrays after sorting . . . \n";
    for (int i = 0; i < 10; i++){
        cout << " " << array[i];
    }


    return 0;
}