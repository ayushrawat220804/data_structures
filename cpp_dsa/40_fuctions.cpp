#include <iostream>
using namespace std;
// fuction and their three major stuff 
// syntax : data_type function_name (type d1, type d2,.....type dn);
int add(int,int); // this is know an function prototype
int main(){
	int a,b,sum;
	std::cout << "enter two numbers to calculate: ";
	cin >> a >> b;
	sum = add(a,b);
	std::cout << "total is : " << sum;
	return 0;
}
int add(int x, int y){ // this is function declaration  , we have to write fuction declaration always after main function.
	int z;
	z = x + y;
	return (z);
	
}
// note if you dont want to write protoype then move to 40.1 code  dev c/cpp. 
