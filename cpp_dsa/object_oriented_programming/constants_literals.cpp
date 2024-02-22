#include <iostream>
using namespace std;
/*
 constants / literals - inshort constant keyword means when we declare a keyword a const then we cannot change its value
 
variable 
const int PI = 3.14;

1: function by value
add(const int a)


2: function by reference 
add (const int &a)


3: pointer
ad(const int *a)

*/
//int main(){
//	const int a = 5;
//// 	a = a+2; // it will show error as it is constant u canout change its value but u can use it 
//	cout << "value: " << a << endl; 
//	
//}

#include <iostream>
using namespace std;

void add (int);
int main(){
	int a = 5;
	add(a);
	
}
void add(int x)
{
	x = x+2;
	cout << "value : " << x;
	
}

