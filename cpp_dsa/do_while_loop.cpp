#include <iostream>
using namespace std;
// do while loop
// well it is similar or exact same as while loop , we use is when we dont knew how many times a loop will actually run.
int main(){
	int a;
	do{
		cout << "enter any number: ";
		cin >> a;
		cout << "you have entered: " << a << endl << endl;
		}
		while (a != 0); {
			cout << "successfully exited." << endl;
		} // here if i press 0 in the initialization part it will break or come out of the loop.
	return 0;
}

/*
what is the basic diff between do while and while loop.
in while loop condition will check at least 1 times whether it is true or false.
in do while loop first block of condition will execute the it will check while loop statement or condition.
