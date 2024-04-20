#include <iostream>
#include <conio.h>
using namespace std;
class company
{
	char id[10];   // here char id mean AB21 CD324 etc
	char name[20];
	char department[20];
	public:
		void getdata(void);
		void display(void);
};
void company :: getdata(void)
{
	cout << "\nenter name: ";
	cin >> name;
	cout << "enter id: ";
	cin >> id;
	cout << "enter department: ";
	cin >> department;
}
void company :: display(void)
{
	cout << "\nid no: " << id << endl;
	cout << "id name: " << name << endl; 
	cout << "department name: " << department << endl;
	getch();
}

int main()
{
	company manager[3], teamlead[5]; // here manager[3] and teamlead[5] ara array of object
	for (int i=0; i<3; i++)
	{
		cout << "\nenter details of manager of the company: " << i+1; // 0+1, 1+1, 2+1.	
		manager[i].getdata(); // manager 0 getdata, manager 1 getdata , manager 2 getdata, loop out
	}
	for (int i=0; i<5; i++)
	{
		cout << "\nenter details of teamlead: " << i+1;
		teamlead[i].getdata(); // same as manager 
	} 
	cout << endl;
	for (int i=0; i<3; i++)
	{
		cout << "\ndetails of manager: " << i+1;
		manager[i].display();
	}
	for (int i=0; i<5; i++)
	{
		cout << "\ndetails of teamlead: " << i+1;
		teamlead[i].display();
	}
	return 0;  
}
