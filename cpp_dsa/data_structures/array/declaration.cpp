#include <iostream>
// lappu sa array
using namespace std;
// array declaration in cpp	
int main()
{
	int i;
	//METHOD 1
	int arr[5] = {213,3,4,45,43};
/*  int arr[] = {213,3,4,45,43}; here i haven't write any specific array size so by default
it will take it from */
//	cout << arr[] << endl; // it will give error cause their is no element to print
	cout << arr[0] << " is at '0' index " << endl; // it will print 213 as output
	cout << "now printing array elements using for loop: " <<endl;
	for (i = 0; i <5; i++){
		cout << arr[i] <<endl;
	} 
	cout << endl;
	cout << arr[6] << " element at index '6' is garbage value, cause indexing is out of range" <<endl;
	cout << "\n" << arr << " this is array address"<<endl ; // it will tell array address
	cout << &arr << " this is also array address " <<endl ; // it tell the same as previous ones
	
	//METHOD 2
	int j;
	cout << "\n\nTAKING ARRAY ELEMENTS:" <<endl;
	int array[5];
	cout << "enter 5 array elements:" <<endl;
	for (j = 0; j < 5; j++){
		cin >> array[j];
	}
	
	// NOW PRINTING ARRAY ELEMENTS
	cout << "\n\nPRINTING ARRAY ELEMENTS:" <<endl;
	for (j = 0; j < 5; j++){
		cout << array[j];
		cout <<endl;
	}
	
	// ADDITION IN ARRAY
	int sum = 0;
	cout << "\n\nNOW ADDING ARRAY ELEMENTS: " <<endl;
	for (j = 0; j < 5; j++){
		sum = sum + array[j];
		cout << sum <<endl;
	}
	cout << "\n\nTOTAL SUM OF WHOLE ARRAY ELEMENTS: "<< sum <<endl;
	
	//INSERTING ARRAY ELEMENT AT SPECIFIC LOCATION:
	char x;
	cout << "DO YOU WANT TO INSERT ELEMENT BETWEEN ARRAY? IF YES PRESS 'y' OTHER WISE NO PRESS 'n': ";
	cin >> x;
	if (x=='y'){
		cout <<"ok";
	}
	else if (x=='n'){
		cout << "no";
	}
	else {
		cout << "sorry invalid option. " <<endl;
	}
	
return 0;	
}



