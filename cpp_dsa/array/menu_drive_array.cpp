#include <iostream>
using namespace std;
int main(){
	int i,x,y,z;
	cout << "what operations you want to perform?\n" << endl;
	cout << "press '1' to print array written iin the programme: " << endl;
	cout << "press '2' to print array elements by the user: " << endl;
	cout << "press '3' to addition of the array:\n" << endl;
	cout << "press '4' to exit: " << endl;
	cout << "press any number: " << endl;
	cin >>x;
	cout << "\n\n" << endl;
	if (x==1){
		system("cls");
		int arr[5] = {213,3,4,45,43};
		cout << "printing default array\n" << endl;
			for (i = 0; i <5; i++){
		cout << arr[i] <<endl;
		} 
	}
	else if(x==2){
		system("cls");
	int j;
	cout << "TAKING ARRAY ELEMENTS:" <<endl;
	int array[5];
	cout << "enter 5 array elements:" <<endl;
	for (j = 0; j < 5; j++){
		cin >> array[j];
	}
	cout << "\nPRINTING ARRAY ELEMENTS:" <<endl;
	for (j = 0; j < 5; j++){
		cout << array[j];
		cout <<endl;
	}
	}
	else if(x==3){
		int j;
		cout << "to calculate array elements give 5 elements: " << endl;

	cout << "TAKING ARRAY ELEMENTS:" <<endl;
	int array[5];
	cout << "enter 5 array elements:" <<endl;
	for (j = 0; j < 5; j++){
		cin >> array[j];
	}
		int sum = 0;
	for (j = 0; j < 5; j++){
		sum = sum + array[j];
//		cout << sum <<endl;
	}
	cout << "\n\nTOTAL SUM OF WHOLE ARRAY ELEMENTS: "<< sum <<endl;
		
	}
	else{
		cout << "invalid operation... programme exited" << endl;
	}
	
	return 0;
	
}
