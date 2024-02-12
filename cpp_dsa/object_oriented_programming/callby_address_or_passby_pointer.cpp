#include <iostream>
using namespace std;
// rani and amit age will be swapped
void age(int*, int*);
int main()
{
	int rani = 10, amit =20;
	age(&rani, &amit); // rani and amit address pass the pointer
	cout << "rani's age: " << rani << endl;
	cout<< "amit's age: " << amit << endl;
	return 0;
}
void age (int *raniageto, int *amitageto) // pointer raniageto and amitage are variables
{
	*raniageto = 20;
	*amitageto =10;
}
