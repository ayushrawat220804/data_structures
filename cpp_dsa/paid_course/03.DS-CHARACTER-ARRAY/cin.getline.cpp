#include <iostream>
using namespace std;
// cin.getline is a inbuild function
int length(char input[]){
	int count = 0;
	for (int i = 0; input[i] != '\0'; i++){
		count++;
	}
	return count;
}
int main(){
	char name[100];
	cout << "enter your name: ";
	cin.getline(name, 10,'\0'); // it will stop taking input asap line touches next line or newline character
	// cin.getline( stirng, size, delimiter ) , here delimiter is "\0" is newline character is hidden.
	// cin.getline ( sting name, size, 'a' ) , here delimiter is 'a' means it will stop taking input
	// asap it reades input as 'a' which is delimiter here. 
 	cout << "your name is : " << name;
	cout << "\nlength of the string : " , length(name);
	
	return 0;
}
