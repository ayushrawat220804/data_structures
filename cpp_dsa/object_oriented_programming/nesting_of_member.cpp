#include <iostream>
using namespace std;
class number{
	int a;
	public:
		void getdata(void);
		int task(void);
		void display(void);
};

void number ::getdata(void)
{
	cout << "enter any number to input as data: ";
	cin >> a;
}
int number ::task(void)
{
	int x;
	if(a%5==0)
	{
		x = 0;
		return (x);
	}
	else
	{
		x = a%5;
		return (x);
	}
}
void number ::display(void)
{
	cout << "remainder = " << task() << endl; // here this is an example of nesting of member.
	// means i have call function inside another member function
}
int main(){
	number num;
	num.getdata();
	num.display();
	return 0;
}
