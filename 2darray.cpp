#include <iostream>
using namespace std;
// 2-d array in cpp
int main(){ // row 1 as 0, row 2 as 1
	int a[2][3]={{1,2,3},{4,5,6}};  // it will goes rows*column , a[rows][columns].
	cout << a[0][1]; // here two rows and three columns so it will count 0,1 as two rows and 0,1,2 as three columns
	return 0;
	
} 
