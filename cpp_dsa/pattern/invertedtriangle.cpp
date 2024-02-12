#include <iostream>
using namespace std;
// triangle pattern
int main(){
	int a,i,j;
	cout << "enter number: ";
	cin >> a;
	cout <<endl;
	for (i=0;i<a;i++) // a is number of lines of pattern to print , i is x axis, i is y-axis
	{
		for (j=0;j<a-i;j++) // 1st it print the value which user have input in the programme then it will decrease one by one and print when the loop complete a round
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
