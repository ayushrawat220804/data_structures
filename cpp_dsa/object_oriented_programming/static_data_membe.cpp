#include <iostream>
#include <conio.h>
using namespace std;
/*
syntax
class class_name

{
...
...
static data_type data member;
...
...
};
data_type class_name :: data member = initial_value; // if u dont want to initial the value then instead of using = otherwise ;

class number {
...
...
static int num;
...
...
};
int number :: num ; // defintion of static data member
or
int number :: num = 10;

in static data type only one memory location is created and all object can share it
*/

class number {
	static int num;
	public:
		void getdata(){
			cout << "enter number: ";
			cin >> num;	
		}
void display (void){
	cout << "number : " << num << endl;
	}
};
int number :: num;
int main(){
	number x, y, z;
	x.display();
	y.display();
	z.display(); 
	cout << endl;
	getch;
	x.getdata();
	y.getdata();
	z.getdata();
	cout << "after entering data: " << endl;
	x.display();
	y.display();
	z.display();
	return 0;
	return 0;
}

/*

now inshort suppose we have 3 objects as a, b , c 
now i give all 3 objects different value as 20,30,40 now static data will replace a and b data by c data
for example i input 10 , 20 , 30 so output i will get is 30 cause data of a and b is replace by c , similar thing is hapenning in this programme , and value of num is 0 by default, cause we haven't initiallized it 

*/
