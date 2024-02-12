#include <iostream>
using namespace std;
// type of statements in cpp 
// example of if statements
int main(){
	int a = 10 , b = 20, c = 25, d = 40 ;
	if (a>b){
		cout << "a is greater then  b." << endl;
		}
	if (a<b){
			cout << "no be is greater then a" << endl;
		}
		if (b<c){ // here nested if started , means if statement inside an if statement
			cout << "yes c is greater then b" << endl;
		}
		if (c>a){
			cout << "yes c is greater then both a and b" << endl;
		}
	return 0;
}
