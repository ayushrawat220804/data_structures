#include <iostream>
using namespace std;
// switch case in cpp
int main(){
	int a;
	cout << "enter you choice between 1 - 2" << endl;
	cin >> a;
	switch (a)
	{
		case 1:
		{
			cout << "you have entered 1 which means, ";
			cout << "i am good."<<endl;
			break;
		}
		case 2:
		{
			cout << "you have entered 2 which means, i am not good." << endl;
			break;
		}
		default :
		{     // we use default when user any other value instead if 1-2.
			cout << "enter between 1 - 2, only" << endl; 
			break;
		}
	}
	return 0;
	 
}
