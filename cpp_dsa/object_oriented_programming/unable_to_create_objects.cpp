#include <iostream>
using namespace std;
// unable to create obejcts
class student{
	public:
	student(){} // is a default constructor
	student(int, int);
};
student :: student (int a , int b){
	cout << "value of a: " << a <<endl;
	cout << "value of b: " << b << endl;
}
int main()
{
	student stu1; // u will egt a error as no matching function for call, this error occurs when we are creating a obejct for any class, so in cpp it has a default constructor which class always call when we declare a object but it will not work when i have already made a parameterized constructor
// fix this error u ahve to create a default constructor. 
	student student (12, 321);
	return 0;
}
