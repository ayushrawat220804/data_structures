#include <iostream>
using namespace std;
int main(){
	int a = 0, i ;
	for (i=0; i<10; i++){
		cout << i <<"\t";
	}
	cout << endl << endl;
	for (i=0;i<10;i++){
		a = a+2;
		cout << a << "\t";
	}
	return 0;
}
