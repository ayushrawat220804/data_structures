#include <iostream>
#include <cstring>
using namespace std;
// strcmp to compare two strings 
/// method 2
//bool mystrcmp(char str1[], char str2[]){
//	if ( strlen(str1) != strlen(str2)) return false;
//	for (int i = 0; str1[i] != '\0'; i++){
//		if (str1[i] != str2[i]) return false;
//	}
//	return true;
//}
int main(){
	char str1[100];
	char str2[100];
	cin >> str1 >> str2;
	// str1, str2 == 0 if they are equal 
	if(strcmp(str1,str2) == 0){
		cout << "both strings are equal" ;
	} else {
	cout << "string are not same. ";
	}	
	int length1 = strlen(str1);
	int length2 = strlen(str2);
	cout << "\nlength of first string : " << length1;
	cout << "\nlength of second string : " << length2;
	
	return 0;
}

