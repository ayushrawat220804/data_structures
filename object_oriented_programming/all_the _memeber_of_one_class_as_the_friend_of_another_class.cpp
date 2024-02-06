#include <iostream>
using namespace std;
// 3. all the memeber function of one class as the friend of another class
/*
class dell;
class logitech{
	int product;
	friend dell; // all member function of logitech are friend of dell.
};
class dell{
	public:
		void lappy(logitech a) // here logitech a is object
		{
			cout << "\nlaptop = " << a.lappy << endl; // product is private data of logitech class
		}
};
*/
class dell;
class logitech{
	int product;
	public:
		void getedata(void){
			cout << "enter any number : ";
			cin >> product;
		}
		friend dell; // friend class
};
class dell
{
public :
	void lappy(logitech a) // accessing logitech data
	{
		cout << "\nlaptop = " << a.product << endl; // product is private data of logitech class
	}
	void keybo(logitech);
};
void dell :: keybo(logitech m)
{
	cout << "keyboard = " << m.product << endl;
}
int main()
{
	logitech x;
	dell y;
	x.getedata();
	y.lappy(x);
	y.keybo(x);
	return 0;
}
