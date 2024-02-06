#include <iostream>
#include <conio.h>
#define size 3
using namespace std;
// example of 1 array of object
class student
{
	int roll; // by default these members are private
	char name[20];
	public: 
	void getdata(void);
	void display(void);
};
void student::getdata(void)
{
	cout << "\nenter name: ";
	cin >> name;
	cout << "enter rollno: ";
	cin >> roll;
}
void student::display(void)
{
	cout << "\nname: " << name << endl;
	cout << "rollno: " << roll << endl;
	cout << "enter to continue..." << endl;
	getch();
}
int main()
{
	student st[size];
	for (int i=0;i<size;i++)
	{
		cout << "\nenter details of student: " << i+1; // first loop 0+1 second loop 1+1 second loop 2+1 fourth loop 3<3, out of loop.
		st[i].getdata();
	}
	cout << endl;
	for (int i=0; i<size; i++)
	{
		cout << endl << "details of student: " << i+1;
		st[i].display();
	}
	return 0;
}
