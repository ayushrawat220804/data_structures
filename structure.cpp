#include <iostream>
using namespace std;
// struct keyword creates a structer to hold diff locations of diff address.
// like char holds 20bytes int holds 4 bytes so it will create a location for both seperately which is 20+4 = 24 bytes.
// so it store data seperately without replacing it with an garbage value
struct student{
	int rollno; // member of structre
	char name[20]; // member of structure
};
int main(){
	struct student stu; // stu is variable name
	cout << "enter roll no: " << endl;
	cin >> stu.rollno;
	cout << "enter name of the student: " << endl;
	cin >> stu.name;
	cout << endl << "rollno of student: " << stu.rollno <<"\t";
	cout << "name of student: " << stu.name;
	
	return 0;
}
