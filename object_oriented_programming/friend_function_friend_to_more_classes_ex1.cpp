#include <iostream>
using namespace std;
class neha; // optional
class rahul{
	private:
		int hi;
	public:
		void disp();
		void getdata();
};
class neha
{
	private:
	int bye;
	friend void rahul :: disp(); 
};
void rahul :: disp()
{
	neha love;
	rahul hate;
	love.bye = 143;
	hate.hi = 322;
	cout << "neha says : " << love.bye << endl;
	cout << "rahul says : " << hate.hi << endl;
}
int main(){
	rahul what;
	what.disp();
	return 0;
}
