#include <iostream>
using namespace std;
int main(){
// continue statement in cpp 
// it skips the statement 
    int n;
	for (n=1;n<=10;n++){
		if (n==7){  // skips if value of n gets 7.
			continue;
		}
		cout << n << "\t"; // we have to write it after continue . if you write it before the if condition then it will not execute n ==7 so in  that case it will print 7 also.
	}
	return 0;	
}
