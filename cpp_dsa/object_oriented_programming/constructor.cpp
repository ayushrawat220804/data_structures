#include <iostream>
using namespace std;
/*

what is constructor/
c++ provides a speacial memebr function called constructor for initializing an object when it is created. this is known as automatic initialization an object.

a class constructor if defined is called whenever a program creates an object of that class.

inshort ye ek special member function h jo object ko initialize karta h kab? jb hum object ko create krte h tabhi 

*/

class comment {
	public:
		comment() // this is special member function or a constructor 
		{
			cout << "i love programming. " << endl;
		}
		void show(void){
			cout << "i am sick. ";
		}
};
int main(){
	comment yes; // in constructor u have to use class name 
	yes.show();
	 // u have to use this . operator to call show function.
// constructor automatically initializes when we create a object ,  here we have create a object name yes
	return 0;
}
