#include <iostream>
using namespace std;
/*
copy constructor

a copy constructor is used to declare and initialize an object from another object

class student{
	...
	public:
		student(student &obj) // copy constructor
		{
			....;
		}
};
student :: student(student &obj){
	....;
}

call copy constructor 
method 1.
class_name target_object(source_object);

method 2. 
class_name target_object = source_object;

ex; 
method 1. 
student targe(source);

method 2.
student target = source;

*/

class student{
	int roll, marks;
	public:
		student (int m, int n)
		{
			roll = m;
			marks = n;
		}
		student (student &t) ; // copy constructor
		void show_data()
		{
			cout << "\nroll no:  " <<roll << endl;
			cout << "marks: " << marks << endl;
		}
};
student :: student (student &t) // copy constructor defined
{
	roll = t.roll; //  if i rewrite any integer instead of this t.roll then it will change 
	marks = t.marks;
}
int main(){
	cout << "\nparameterized constructor output r : " << endl;
	student r(60,312); // parameterized constructor
	r.show_data(); // parameterized constructor output
	cout << "\n\ncopy constructor output stu (r)" << endl;
	student stu(r); // calling copy constructor
	stu.show_data(); // copy constructor output
	return 0;
	
}
