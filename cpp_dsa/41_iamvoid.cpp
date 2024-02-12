#include <iostream>
using namespace std;
void disp(void); // we use void when we dont get any value of return type

int main(){
	disp();
	return 0;
}
void disp(void){
	cout << "hello i am void.";
}

// note : if you dont want to use void disp(void) prototype in line 3  you can remove it and paste line 9 - 11 before main function . code is in 41.1 dev c/cpp.
