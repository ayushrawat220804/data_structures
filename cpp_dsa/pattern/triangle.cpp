#include <iostream>
using namespace std;
// triangle pattern
int main(){
	int a,i,j;
	cout << "enter number: ";
	cin >> a;
	cout <<endl;
	for (i=0;i<a;i++)
	{
		for (j=0;j<i+1;j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
