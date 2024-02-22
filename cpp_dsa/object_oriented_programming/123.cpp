#include <iostream>
using namespace std;
/*
static function static methods the function which only use static variable and the toehr static function
for make function static we use static keyword before function name;

syntax
class a{
	static int c;
	public:
		static void getc(){
			// function code
		}
};

*/
class mycompany{// programme is same as previous program i am only add static function
	int id;
	static int count;
	public:
		void setdata()
		{
			cout << "enter the id: " << endl;
			cin >> id;
			count++;
			}
		void getdata(){
			cout << "the id of this employee is: " << id << endl << "this is employee no: ";
		}
		static void getcount(){
			cout << "the value of the count is: " << count << endl;
		}
};
int mycompany::count;
int main(){
	mycompany adity, adi;
	adity.setdata();
	adity.setdata();
	mycompany::getcount();
	adi.setdata();
	adi.setdata();
	mycompany::getcount();// 2nd use of scope resolution operator is use to call static members without help of an object
}
