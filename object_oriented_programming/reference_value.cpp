#include <iostream>
using namespace std;
// reference value means alternative name for a varaible or el varaible ko ek or extra name dedena
int main(){
	int a = 10;
	int &nickname = a; // here nickname is alternative name to a means you can use nickname instead of a
	cout << "value of a: " << a << endl;
	cout << "value of nickname: " << nickname << endl;
	cout << "address of a: " << &a << endl;
	cout << "address of nickname: " << &nickname << endl ;
	cout << "both are same we just gave alternative name to variable 'a' as 'nickname'. " << endl;
	return 0;
	
}
