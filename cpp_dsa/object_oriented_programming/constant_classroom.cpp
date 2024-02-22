#include <iostream>
// padh le bhai khali dekh lene se job nhi lgti 
using namespace std;
class mystudent_roll{
	int id;
	public:
		int salary;
		void setid() const { 
		salary = 174;
		cout << "enter the id of student: " << endl;
		cin >> id;
		}
		void getid(){
			cout << "the id of this student is: " << id << endl << endl;
		} // this method give the output of the user entry 
};

int main(){
	mystudent_roll s;
	s.getid();
	s.setid();
//	s.salary = 23000; this is not the right way 
	return 0;
}
/*

note : i have maked variable constant by using const keyword
when i don't want to make whole method constant

*/
