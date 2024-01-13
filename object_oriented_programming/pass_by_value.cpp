#include <iostream>
using namespace std;
// below is the example of passby value or call by value.
int add(int, int);
int main(){
	int a = 10, b= 20, sum;
	sum = add(a,b);
	cout << "addition= " << sum << endl;
}
int add (int x, int y){
	int total;
	total = x + y;
	return (total);
	return 0;
}
