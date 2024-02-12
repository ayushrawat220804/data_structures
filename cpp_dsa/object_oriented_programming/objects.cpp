#include <iostream>
using namespace std;
// objects - it is a class type variable.
/* declaration of object
class student 
{
.
.
}stu1,stu2,stu3;

or 
syntax: 
class classname objectname1, objectname2,...;
or
classname objectname1,objectname2,...;

ex:- 
class student stu1;  
or 
student stu1; 

are some types how we decalre objects.
*/

class student
{
	private:
		int id;       // here id and name are data members
		char name[20];
	public:          // we can access private data by the help of public class 
		void getdata(void);  // here these are member function
		void display(void)
		{
			cout << id << "\t" << name << endl;
		}
		
};
int main(){
	student stu1,stu2;
	cout << "hello world!";
	
	return 0;
}
