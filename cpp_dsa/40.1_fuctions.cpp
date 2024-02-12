#include <iostream>
using namespace std;
int add(int x, int y){ // we have to declare it before the main fuction if you down want to use function protoype.
	int z;
	z = x + y;
	return (z);
}
int main(){
	int a,b,sum;
	std::cout << "enter two numbers: ";
	cin >> a >> b;
	sum  = add(a,b);
	std::cout << "total: " << sum;
	
	return 0;
}
