#include <iostream>
using namespace std;
/* 
class rani{
	int b;
	public:
		void getdata();
		friend return_type function_name(rani &, rahul &);
		...
};
class rahul{
	int a;
	public:
		void getdata();
		friend return_type function_name(rani &, rahul &);
		...
};

function definiton
void exchange(rani &m, rahul&n) // if we change any value in m or n they by default it will also change the value of a, b , this is a property of by_reference
{
	function body;
}

function call
exchange (a,b);

*/
class rahul;
class rani
{
	int x;
	public :
		void getdata(){
			cout << "rani has rs. : ";
			cin >> x;
			 
		}
		void display (){
			cout << "rani has rs. : " << x << endl;
		}
		friend void exchange(rani& , rahul&);
};
class rahul{
	int y;
	public:
		void getdata(){
			cout << "rahul has rs. : ";
			cin >> y;
		}
		void display(){
			cout << "rahul has rs. : " << y << endl;
		}
		friend void exchange(rani& , rahul&);
};
void exchange (rani &m, rahul &n){
	int temp;
	temp = m.x;
	m.x = n.y;
	n.y = temp;
}
int main(){
	 rani a;
	 rahul b;
	 a.getdata();
	 b.getdata();
	 cout << "\nbefore exchange: " << endl;
	 a.display();
	 b.display();
	 exchange(a,b);
	 cout << "\nafter exchange: " << endl;
	 a.display();
	 b.display();
	 return 0;
}

