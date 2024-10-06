#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char str1[100];
	char str2[100];
	cout << "enter two strings: " << endl;
	cin >> str1>>str2;
	int length1 = strlen(str1);
	int length2 = strlen(str2);
	cout << "length of string 1 : " << length1 << endl;
	cout << "length of string 2 : " << length2;
	
	return 0;
}
