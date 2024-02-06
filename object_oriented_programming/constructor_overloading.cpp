#include <iostream>
using namespace std;
/*
constructor overloading - when more than one constructor function is defined in a class
then it is called constructor overloading or use of multiple constructor in a class.

class student
{
	int id, roll;
	public:
		student();
		student(int); // create a constructor but cannot create same constructor u can make either by using different data type like float
		student(int,int); // by this method u can create more than one constructor, u cannot create same construct like student(int , int)
};

*/

class student{
	int roll, marks;
	public:
		student();
		student (int);
		student (int, int);
		void show(void);
};
student :: student(){
	roll = 3;
	marks = 5;
}
student :: student (int a){
	roll = marks = a;
}
student :: student(int x, int y){
	roll = x;
	marks = y;
}
void student :: show(void){
	cout << "roll: " << roll << endl;
	cout << "marks: " << marks << endl;
}
int main(){
	student stu1; // or u can write it like // student stu1, stu2, stu3;
	student stu2 = 30; // then initialize them like stu1 = student (23);
	student stu3 = (45, 50);
	cout << "one argument: " << endl;
	stu1.show();
	cout << "\ntwo arguments " << endl;
	stu2.show();
	cout << "\nthree arguments " << endl;
	stu3.show();
	return 0;
}



