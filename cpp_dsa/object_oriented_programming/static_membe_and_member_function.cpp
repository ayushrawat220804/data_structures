#include <iostream>
// lappu sa dsa
using namespace std;
/* chomu ye ek comment h 
static member and the member function
why we use static members of a class
we know that every object make new storage for their calculation and the operation perform but when we use but but! the other object
is always share that member allocated storage.

ex:
all the student present in the class share 1 pen only because i am declared that pen are static method to use

*/

void increase(){
	static int num = 0;
	cout << ++num << endl;
}
int main(){
	increase();
	increase();
	return 0;
}
