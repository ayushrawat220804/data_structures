#include <iostream>
using namespace std;
int sum(){
	int num1, num2, total;
	cout << "enter two numbers : " << endl;
	cout << "first : " << endl;
	cin >> num1;
	cout << "second : " << endl;
	cin >> num2;
	total = num1 +num2;
	return total; // it is mendatory to use this type of return other wise will show error
}
int main(){
	int add = sum(); // function call and take return value in "add" variable
	cout << "the sum of two number is : "<< add;
	return 1;
}

