#include <iostream>
using namespace std;
/*
class rani; // forward declaration
class rahul
{
int a;
friend return_type function_name(all class_name seperated by comma);
...
};
class rani{
int b;
friend retrun_type function_anem(all class_name seperated by comma);
...
};

function befinition syntax : 
return_type function_name(class_name object_name, class_name1 onject)
{
object.function_name();
return 0;
}

function definition example:
void add(rahul m, rani n)
{
m.a;
n.b;
}

function call 
rahul k;
rani v;
k.getdata();
v.getdata();
function_name (object, object)
ex:
disp(k,v);

*/

class rani;
class rahul{
	int a;
	public :
		void getdata(void){
			cout << "enter rahul's total marks: ";
			cin >> a;
		}
		friend void add(rahul, rani);
};
class rani{
	int b;
	public :
		void getdata(void){
			cout << "enter rani's total marks: ";
			cin >> b;
		}
		friend void add(rahul, rani);
};
void add (rahul m, rani n){
	cout << "total marks of both: " << m.a + n.b<< endl;
}
int main(){
	rahul k;
	rani v;
	k.getdata();
	v.getdata();
	add(k,v);
}
