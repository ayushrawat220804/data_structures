#include <iostream>
using namespace std;
// nested for loop means, loop inside an existing loop.
int main(){
	int i,j;
	for (i=1; i<=5; i++){  // here i will create 5 rows
	for (j=1; j<=5; j++){ // here it will create 5 colums
		cout << j;
	}
	cout << i <<endl;
	}
	return 0;
	
}
