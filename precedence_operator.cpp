#include <iostream>
using namespace std;
main(){
	// PRECEDENCE OF OPERATOR OR PRIORITY OF OPERATOR
	// BODMAS RULE APPLIES
	int a = 10, b = 20, c = 30, result;
	result = a + b + c;
	cout << result << "\tresult 1\n";
	result = a/b+c;
	cout << result << "\tresult 2\n";
	result = a - b / c;
	cout << result << "\tresult 3\n";
	result = a*b/(c+c);
	cout << result << "\tresult 4\n";
	result = a*b/c+c;
	cout << result << "\tresult 5\n";
	return 0;
 
		
}
