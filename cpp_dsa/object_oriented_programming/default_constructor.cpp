#include <iostream>
using namespace std;
// default constructor 
//a default constructor is a constructor that either has no parameters, or if it has parameters, all the parameters have default values.
/*
class student{
	int roll_no;
	public:
		student();
};
student :: student()// deafult constructor defined
{
....
}
student object 1;

*/

class student 
{
	int id;
	public:
	student ()  // student is a constructor
	{
		id = 10;
		cout << "id: " << id << endl;
	}
};
int main(){
	student stu;
	return 0;
}
