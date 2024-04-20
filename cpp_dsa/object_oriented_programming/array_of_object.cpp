#include <iostream>
// lappu*100 = lappu multiply by 100 lappus
using namespace std;
/*
if i have no. of object is more which all have to use same function that time we will make array of all those object 
and easily manage by the help of loop 
this is simple example which gives you understanding about this 
*/
class mystudent_roll{
	int id;
	public:
		void setid(){
			cout << "enter the id of student: " << endl;
			cin >> id;
		}
		void getidid(){
			cout << "the id of this student is: " << id << endl;
		}
};

int main(){
	mystudent_roll roll_no[4]; // here roll_no[4] is array of object
	for (int i=0;i<4;i++){
		roll_no[i].setid();
		roll_no[i].getidid();
		
	}
	return 0;
	
}

