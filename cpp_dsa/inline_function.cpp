#include <iostream>
using namespace std;
// inline function in cpp
// we use it to reduce control time, here is the example
inline int add (int a, int b) // inline function
{
	return (a+b); // this code will be directly played to line no 11 
}
int main(){
	int x = 10, y=20;
	cout << add(x,y) << endl; // function call
	return 0; // here it will directly jump to line 7 which returns value of a + b
}

// we cannot use inlinefunction when body function is large for example u cannot use it using loop or recursive functions
// we we use it when our programme is small.
