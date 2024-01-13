#include <iostream>
using namespace std;
// memebr function - a member function performs an operation required by the class.
// it may ne used to read, manipulate, or display the data member.

// member function of a class can be defined in two places:
// 1: inside the class definiton
// 2: outside the class definiton - (declare it after the class and before the main function)
// :: this is a scope operator - this tell the belongingness of a function
// example:

/*
void student :: getdata(void)
{
cout << "enter the name: ";
cin << name;
cout << "enter the rollno: ";
cin >> roll;
*/

class student
{
	private:
		int id;       // here id and name are data members
		char name[20];
	public:
		int a;
		void getdata(void);
		void display(void){   // this is inside the class deifination
			cout << id << "\t" << name << endl; // this also , compiler will treat it like an inline function.
		} // this also
};
int main(){
	cout << " hello world!j8"<<endl;
	return 0;
}	
