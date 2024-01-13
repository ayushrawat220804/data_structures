#include <iostream>
using namespace std;
class student
{
	private :
		char name[20];
		int roll;
	public:
		void getdata();
		void display()
		{
			cout << "name displayed as: " << name << endl;
			cout << "roll displayed as: " << roll << endl;
		}
};
void student :: getdata(void) // we have define this data outside the class
{
	cout << "enter name: ";
	cin >> name;
	cout << "enter roll: ";
	cin >> roll;
}
int main()
{
	student stu;
//	stu.roll = 101;  // roll is a private data, we cannot direct access it with this line it will show error 
	stu.getdata();  // getdata is public
	stu.display(); // display is public
	return 0;
}
