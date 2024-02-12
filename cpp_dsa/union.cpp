#include <iostream>
using namespace std;
// union structure
// union also store the memeory location but it replace the data with another 
// union creates a single memory location to store the data
// char holds 20bytes and int holds 4 bytes - union sirf who location hold karega jiska value location sbse jyda hoga
// yhn pr char holds 20bytes so woh ek hi single memory location store krta h , isse liye niche output me garbage value aara h, instead of name.
union student{
	char name[20];
	int rollno;
};

int main(){
	union student stu;
	cout << "enter name of the student: ";
	cin >> stu.name; // here union structure create a memory location to store name
		cout << "name of the student: " << stu.name << endl;

	cout << endl << "enter rollno of the student: ";
	cin >> stu.rollno; // here it will replace that previous memory location(name) to rollno, thta is why name is shows as single value which is garbage value.
	cout << "rollno is: " << stu.rollno << endl;
	cout << "name is: ";
	cout << stu.name; // now name is replace with grabage value
	return 0;
}
