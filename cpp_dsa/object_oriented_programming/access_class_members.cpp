#include <iostream>
using namespace std;
// access class members using object
// class_name class_object_name
// object_name.data_member
// object_name.member_function

class student
{
	private:
		int id;       // here id and name are data members
		char name[20];
	public:
		int a;
		void getdata(void);
		void display(void){
			cout << id << "\t" << name << endl;
		}
};
int main(){
	cout << "hello world" <<endl;
	return 0;
}
