#include <iostream>
using namespace std;
// parameters and arguments 
int sum (int a, int b) // we are defining the paramets , here a and b are parameters 
{
	return (a+b);
}
int main(){
	int total;
	total = sum (10 ,  1450); // we are calling the function, here 10, 1450 are arguments
	cout << total;
	return 0;
}
