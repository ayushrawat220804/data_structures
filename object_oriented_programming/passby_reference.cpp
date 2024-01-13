#include <iostream>
using namespace std;
// in real world ek human h ousske do name h rani or amit, so agar hum bolte h rani pass h so same apply hota h ki amit bhi pass h,
// same logic idher bi apply hota hai
void age(int&, int&); // int& means intaddressof
int main()
{
	int rani = 10, amit =20;
	age(rani, amit);
	cout << "rani's age: " << rani << endl;
	cout<< "amit's age: " << amit << endl;
	return 0;
}
void age (int &rani, int &amit) // &rani and &amit means addressof rani and addressof amit
{
	rani = 50;
	amit =30;
}
