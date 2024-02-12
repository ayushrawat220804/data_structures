#include <iostream>
using namespace std;
// we uses else if condition where we compare more then 2 conditions.
int a = 10, b = 20, c = 30, d = 40, e = 50;
int main(){
	if (c>e) {
		cout << "c is greater" << endl;
	}
	else if (d<a){
		cout << "a is greater" << endl;
	}
	else if (e<d){
		cout << "d is greater" << endl;
	}
	else {
		cout << "e is greater" << endl;
	}
	return 0;
} 
