#include <iostream>
using namespace std;
// parameterised function
int sum(int x, int y) // int x and int y are arguments
{ // return type function
int num1, num2, total;
num1=x;
num2=y;
total = num1 +num2;
return total;
}
int main()
{
	int add = sum(12,32); //
	cout << "the sum of the two numbers is : " << add << endl;
	return 1;
}
