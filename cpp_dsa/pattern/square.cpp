#include <iostream>
using namespace std;
// square pattern print
int main(){
	int a,i, j;
	cout << "enter how long the square you want to print: ";
	cin >> a;
	cout << "the number of lines you entered are : " << a << endl;
	cout << "here is the star pattern: " << endl << endl;
	for (i=0;i<a;i++)
	{
		for (j=0;j<a;j++)
		{
			cout << " * ";
		}
		cout << endl;
	}
	return 0;
}
