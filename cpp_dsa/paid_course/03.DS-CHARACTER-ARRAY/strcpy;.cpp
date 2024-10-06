#include <iostream>
#include <cstring>
using namespace std;
// strcpy to copy the string
int main(){
	char str1[100];
	char str2[100];
	cin >> str1 >> str2;
	cout << "before copying string are : \n" << str1 << "\n" << str2;
	// strcpy(destination_string,source_string)
	strcpy(str1,str2); // note: that the strcpy also copy the null character
	cout << "\nafter copying string are : \n" << str1 << "\n" << str2;	
	
	return 0;
}
