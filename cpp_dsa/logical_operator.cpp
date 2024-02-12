#include <iostream>
using namespace std;
main(){
	// logical AND operator (&&)
	// Truth table for logical AND operator: if both are True then output is True, if both are False then output is False, if one is True and another one is False then it is False.

	int a = 10, b = 15, c = 20, result;
	result = ((a<b) && (a<c));
	cout << result << "\tfirst logical operator\n"; // if output is 0 then it is False , if output is 1 then it is True.
	
	// logical OR operator (||)
	// Truth table for logical OR operator: if both are True then output is True, if both are False then output is False, if one is True and another one is False then it is True.

	int d = 25, e = 30, f = 35;
	result = ((d>e)||(e>f));
	cout << result << "\tSecond logical operator\n"; // if output is 0 then it is False , if output is 1 then it is True.
	
	// Logical NOT operator (!)
	// Truth table for logical NOT operator: if operand is True then it is False, if operand is false then it is True,
	result = !(d>e); // d bda hai e se ? in reality jo ki nhi h , so it will return 1 are True.
	cout << result <<" ";
	result = !(d<e); // e bda hai d se ? in reality jo ki h, so it will return 0 are false. 
	cout << result << "\tThird logical operator\n";
	
	
	
	
	
}
