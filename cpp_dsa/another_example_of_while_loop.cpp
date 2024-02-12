#include <iostream>
using namespace std;
int main(){
	int i;
	cout << "enter 0 to exit" << endl;
	while (1){
		cout << "enter any value: " << endl;
		cin >> i;
		cout << "you have entered: " << i << endl;
		if (i==0){
			cout << "programme exited." << endl;
			break;
		}
	}
	return 0;
}
