#include <iostream>
using namespace std;
// Implicit (automatic conversion) and Explicit (cast Conversion) in C++
// means low ranking to high order ranking
// CHAR  <  INT  <  LONG INT  <  FLOAT  <  DOUBLE
// Low ranking --------------------> high ranking
/* Example :
int a = 10;     here a is an integer data type value which is lower compare to float
float x = 3.1, y;    x is an float data type value which is higher compare to int
y = a*x         here, which data type is high ranking it will convert into that data type */
int main (){
	int a = 15;
	float x = 3.1, y;
	y = a*x;
	cout << y << endl; // output is in float data type cause it is in higher ranking then int data type
	
// with explicit type conversion we have to type manually in which data type we wanted as output if we want it in int , float or any toher data type.
/* here is the syntax :
   (type)expression
   or 
   (type)(expression)
*/
    int z = 7; // here it is declared as integer data type
    float b; // here b is declared as float data type
    b = z/2; // here by default i will give output in int data type
    cout << b << endl; // output will be in int 
// we wanted the output in float then we will use explicit conversion
    b = (float)z/2; // here we have declared z as an float data type which was integer back then, so now...
    cout << b <<endl; // output will be in float data type
	return 0;
}
