#include <iostream>
using namespace std;
// pointer is a variable which shows address of another variable
int main()
{
	int a = 10; // use same data type to show address using ptr.
	cout << a << endl;
	int *ptr; // note you have to use same data type to show address of that data type other wise it will not show
 	ptr = &a; // address initialization
 	cout << "address of pointer a: " << ptr << endl;
 	cout << "value of a: " << *ptr << endl; // print value of a pointer
 	*ptr = 100; // value of pointer changed from 10 to 100.
 	cout << "changed value of a: " << *ptr;
	return 0;
}

