#include <iostream>
#include <conio.h>
using namespace std;
// 
class student {
	private:
		char name[20], address[20];
		int roll, zipcode;
	public:
			student();
			~student();
			void read();
			void disp();
};
student :: student()
{
	cout << "\nstudent details: " << endl;
}
void student :: read()
{
	cout << "enter student name: ";
	cin >> name;
	cout << "enter student roll no: ";
	cin >> roll;
	cout << "enter student address: ";
	cin >> address;
	cout << "enter zipcode: ";
	cin >> zipcode;
}
void student :: disp(){
	cout << endl << "student name: " << name << endl;
	cout << "student roll no: " << roll << endl;
	cout << "student address: " << address <<endl;
	cout << "student zipcode: " << zipcode << endl;
}
student :: ~student(){
	cout << "\nstudent details is closed and realted object ";
}
int main()
{
{
	student s1;
	s1.read();
	s1.disp();
	
}
getch();
student s2;
s2.read();
s2.disp();
getch();
return 0;
}
