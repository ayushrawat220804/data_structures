#include <iostream>
using namespace std;
class student{
	public:
		void disp(void)const; // just have to write const at the end of the function declration
//		{
//		cout << "I am constant.";
//		}
};
void student :: disp(void)const // u can declare it outside class like this 
		{
		cout << "I am constant.";
		}
int main(){
	const student obj;
	obj.disp();
	
}

// constant object can access only those members functions which are constant
