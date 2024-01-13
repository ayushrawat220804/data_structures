#include <iostream>
using namespace std;
// 2d array string.
int main(){
	char name[2][20]={"ayush","rawat 1st"};
	cout << name[0];   // 'ayush' as 0
	cout << name[1] << endl;  // 'rawat 1st' as 1
// take input from the user to store 2d array.
    cout << "now taking input from the user" <<endl;
    cout << "enter your naam" << endl;
    char naam[2][20];
    cin >> naam[0] >> naam[1];
    cout << "you have entered naam string as: ";
    cout << naam[0] << " " << naam[1];
	
	return 0;
}
