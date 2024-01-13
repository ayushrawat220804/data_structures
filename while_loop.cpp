#include <iostream>
using namespace std;
// while loop is cpp
// generally we use while loop when we dont knew how many times this loop will run.
//int main(){
//	int i = 0;
//	while (i<10){
//		cout << i++ << "\t";
//	}
//}
// or we can use true or false in while loop 1 is for true 0 is for false.
int main(){
	int i = 0;
	while (1){
		if (i==10){
			cout << "value of i is less then equal to 10 now";
			break;
		}
	cout << i++ <<endl;
	}
	return 0;
}
