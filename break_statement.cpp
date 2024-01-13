#include <iostream>
using namespace std;
int main(){
	int a;
	for (a=1; a<10; a++){
		cout << a;
		if (a==5) {
			cout << endl << a << "\t";
			cout << "programme aborted." <<endl;
			break;
		}
	}
	return 0;
}
