#include <iostream>
using namespace std;
class sum{
	int a,b;
	friend int add(void); // friend function , it is non member of the class.
};

int add(void){  // function definition
	sum s;
	int temp;
	s.a = 10;
	s.b = 20;
	temp = s.a + s.b;  // accessing private data (a and b) from non-member function which is friend function
	return temp;
}
int main(){
	int result;
	result =  add();
	cout << "sum = " << result << endl;
	return 0;
}
