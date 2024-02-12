#include <iostream>
using namespace std;
// generally there are 4 main types of special operators in cpp : prefix and postfix increment , prefix and postfix decrement.
int main(){
// increment operator
	int a = 3;
	cout << a++ << endl;  // value is 3 
    cout << a << endl;  // value is 3 + ! = is now 4
	cout << ++a << endl;  // value is 4+1 = 5
	cout << a << endl << endl;  // value is 5
	
// similarly we have decrement operator
	
	cout << a-- << endl;  // value is 3 
    cout << a << endl;  // value is 3 - ! = is now 2
	cout << --a << endl;  // value is 2-1 = 1
	cout << a << endl << endl;  // value is 1
	
// assignment operator 
// +=, -=, *=, /= are 4 main assignment operator.
    int m = 12; // value of m is 12
	m +=10 ; // here using += operator value of m which is 12 is increase by + 10 now it is 22. 
	cout << "value of m : " << m << endl;
	m -=10; 
	cout << "value of m : " << m << endl;
	m *=10;
	cout << "value of m : " << m << endl;
	m /=10;
	cout << "value of m : " << m << endl;
	m %=10;
	cout << "value of m : " << m << endl << endl;
	
// size of operator 
// sizeof operater tells the size of a data type it holds in the computer memory
    char x = 10;
    cout << "size of this int data type is : " << sizeof(int) << endl;
    cout << "size of this 'x' char data type in the computer memory is : " << sizeof(x) << endl << endl;
    
// comma operator 
// if your other variables are of same data type then you can use comma operater instead of writting them seperately 
    int q = 50, w = 40, t = 58; // t also holds the same value of w 
    cout << "comma operater : " << q << "\t" << w << "\t" << t ;
    return 0;
	
}

