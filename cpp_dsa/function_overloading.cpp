#include <iostream>
using namespace std;
/*

function overloading
it means functions having same name but different working;
and we call them to do different task;

hint: function name is same  but there parameters is different we call them on the basis of their para meters

ex - void fun(){
// some code 
}
void fun(int a){
// some code 
}
int fun(int a, int b){
// some code 
}

*/
void fun (){
	cout << "hello world , this is function 1 without paraeters." << endl;
}
void fun(int a){
	cout << "hello world , this is function 2 with parameters. " << endl;
}
void fun(int a,int b){
	cout << "sum of the two numbers: " << a+b;
}
// int fun(){}
//
int main(){
	cout << "hellow";
	return 0;
}
