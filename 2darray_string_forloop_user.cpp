#include <iostream>
using namespace std;
// two d char array for string store name of 10 students using for loop.
int main(){
	char name[3][10]; // 3 is strings and 10 is length of every string.
	int i;
	for (i=0;i<3;i++){ // note: whenever you are using loop for array always use initial value by 0, otherwise it will miss 1 integer value or string value.
		cout << "enter string: "; // to take input for the string named
		cin >> name[i];
		
	}
	cout << endl;
	for (i=0;i<3;i++)
	{
		cout << name[i] << endl; // for print output of the string names
	}
	
	return 0;
}
