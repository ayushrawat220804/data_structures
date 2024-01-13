#include <iostream>
#include <iomanip> // means manipulate

using namespace std;
main() {
	int a = 10;
	float b = 103.2334;
	char c = 'H';
	double d = 123.3445673346668908;
	cout <<setprecision (15)<< d; // we can print more point value but have to use setprecision keyword which is stored in <iomanip> header file.
}
