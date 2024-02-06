#include <iostream>
using namespace std;
class sum{
	int a,b;
	public:
		void get_number(void);
		friend int add(void); // friend function , it is non member of the class.
};
void sum :: get_number(void){  // means s.get_number a and b will store values
	cout << "enter any two numbers: \n";
	cin >> a >> b ;
}
int add(void){  // function definition
	sum s;
	int temp;
	s.get_number(); // means sum::get_number(void); 
	temp = s.a + s.b;  // accessing private data (a and b) from non-member function which is friend function
	return temp;
}
int main(){
	int result;
	result =  add();
	cout << "sum= " << result << endl;
	return 0;
	
}
