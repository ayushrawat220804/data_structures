#include <iostream>
using namespace std;
// lappu sa programme
class mycompany{
	int id;
	static int count;
	public:
		void setdata(){
			cout << "enter the id " << endl;
			cin >> id;
			count++;}
		void getdata(){
			cout << "the id of this employee is " << id << endl << "this is employee no. " << count << endl << endl;
		}
		
	
};
int mycompany::count; // this is mendatory to do in order to access count function through member

int main(){
	mycompany aditya, adi;
	aditya.setdata();
	aditya.getdata();
	adi.setdata();
	adi.getdata();
}
 
