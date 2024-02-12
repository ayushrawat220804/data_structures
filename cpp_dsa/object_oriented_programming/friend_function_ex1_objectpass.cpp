#include <iostream>
using namespace std;
class sum{
	int a, b;
	public:
		void get_number(void);
		friend int add(sum s); // if you are passing more then one object then add(sum one, sum two, sum three)
};
void sum::get_number(void){
	cout << "enter any two numbers: \n";
	cin >> a >> b;
}
int add (sum s){
	int temp;
	temp = s.a +s.b;
	return temp;
}
int main(){
	sum z;
	int result;
	z.get_number();
	result = add(z);
	cout << "sum = " << result << endl;
	return 0;
}
