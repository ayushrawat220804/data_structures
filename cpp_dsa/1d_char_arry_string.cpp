#include <iostream>
using namespace std;
// char data type in cpp
int main ()
{
	char language[20];
	char name[20]="ayush rawat"; // it will count space and a null character at the end so here it will take 12 space.
	cout << name <<endl;
	cout << "enter you language: " << endl;
	cin >> language;
	cout << "you have entered: " << language << " as you default language." << endl;

	return 0;
	
}
