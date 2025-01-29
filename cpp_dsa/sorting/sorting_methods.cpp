#include <iostream>
#include <algorithm>
using namespace std;
int main(){
system("cls");
    int n;
    cout << "enter you array length: ";
    cin >> n;
    cout << "enter you arrays: ";
    int array[n];
    for (int i = 0; i < n; i++ ){
        cin >> array[i];
    }
    
    cout << "you have entered these arrays : ";
    for (int i = 0; i < n; i++){
        cout << array[i];
        cout << " ";
    }
    // sorting m1
    // std::sort(std::begin(array), std::end(array)); // for vector, to use this in raw array you have to use const int fun, like const int n =10;
    sort(array, array+n); // this can run in raw array 

    cout << "\narray after sorting : " ;
    for (int i = 0; i < n; i++ ){
        cout << array[i];
        cout << " ";
    } 

    return 0;
}