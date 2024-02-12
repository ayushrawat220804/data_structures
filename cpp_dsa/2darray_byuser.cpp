#include <iostream>
using namespace std;
// take elements of 2d array by user and print them
int main(){
	int i,j;
	int a[2][3];
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			cin >> a[i][j];
		}
	}
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
} 
