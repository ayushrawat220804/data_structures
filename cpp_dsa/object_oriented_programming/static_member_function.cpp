#include <iostream>
using namespace std;
// static member function in c++

/*
class class_name 
{
...
...
static data_type data member;
for outside class
static return_type function_name();

};

data_type class_name :: data member = inital_value;
for inside class
data_type class_name :: function_name(){

function body; // only use static data member

}

function call
class_name :: function_name();

ex: 
number :: dosplay();

*/
class counter{
static int count;
	int n;
	public:
		void setdata(void){
			count++;
			n=count;
		}
void showvalueofn(void){
	cout << "the value of n is:  " << n << endl;
}
static void showcount(void){
	cout << "count: " << count << endl;
}
};
int counter :: count;
int main(){
	counter  c1,c2, c3;
	counter::showcount(); // bydefault we haven't initialized the value of count so , it will return 0
	c1.setdata(); // setdata will increase count by count++ , 0 + 1 = 1
	c2.setdata(); // setdata will increase count by count++ , 1+1 = 2
	counter::showcount(); // output will be 2
	c3.setdata();
	counter::showcount();// set data will increase count by count++ , 2+1 =3
	c1.showvalueofn(); // 1
	c2.showvalueofn(); // 2
	c3.showvalueofn(); // 3
	return 0;
}
 
