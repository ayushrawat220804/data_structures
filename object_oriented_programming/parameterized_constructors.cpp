#include <iostream>
using namespace std;
/*
 parameterized constructor
the constructos that can take the arguments are called parameterized constuctors.

syntax;

class student
{
	int id; roll;
	public: 
	student(int , int);  // parameterized constructor
};
student :: student (int n , int r){
	
	id = n;
	roll = r;
}

student object 1; this is wronge when we are using parameterized constructors

we have 2 methods to create constructor parameters 

method 1. 

by calling the constructor explicitly
student object 1 = student (10, 145);

method 2. 
by calling the constructor implicitly / shorthand method
student object 1 = (10, 145);

*/


class student {
	public:
		student (int , int);
};
student :: student(int a, int b)
{
	cout << "value of a: " << a << endl;
	cout << "value of b: " << b << endl;
}
int main()
{
//	student stu = student (10, 145); // explicitly calling
	student stu (30, 45);  // implicitly calling also known as shorthand method
	return 0;
}

