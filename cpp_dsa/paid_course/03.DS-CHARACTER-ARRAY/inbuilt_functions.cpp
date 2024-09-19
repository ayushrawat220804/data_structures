#include <iostream>
#include <cstring>
using namespace std;
int main(){
//	char string[100];
//	cout << "enter a string: ";
//	cin >> string;
//	int length = strlen(string);
//	cout << "string is : " << string << endl;
//	cout << length << " is length of string ";
//	

// inbuild fn2
    char str1[100];
    char str2[100];
    cin >> str1>>str2;
    if(strcmp(str1,str2) == 0) {
    	cout << "both the strings are equal. ";
	}else cout << "not equal. ";
	return 0;
}
