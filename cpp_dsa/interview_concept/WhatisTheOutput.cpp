#include <iostream>
#include <cstdio>
using namespace std;
int main (){
    system("cls");
    int n = printf("hello world!"); // first output?
    int m = printf("\0"); // second output ?
    int o = printf(""); // third output ?
    int p = printf("\n"); // fourth ouput ?

    cout << n;
    cout << endl;
    cout << m;
    cout << endl;
    cout << o;
    cout << endl;
    cout << p;
    
    return 0;
}