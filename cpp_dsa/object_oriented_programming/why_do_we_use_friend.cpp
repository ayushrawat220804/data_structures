#include <iostream>
using namespace std; 
// first we can access private data of 2 or more class , 2nd less code inshort we can make same programme without using friend function but the thing is that freidn function akes it smaller to code 
class rani;
class rahul{
	int a;
	public :
		void getdata(void);
		friend void add(rahul, rani);
};
class rani
{
	int b;
	public :
		void getdata(void);
		friend void add(rahul, rani);
};

void rahul :: getdata(void){
	cin >> a;
}
void rani :: getdata(void){
	cin >> b;
}

void add (rahul m, rani n)
{
	cout << "total marks of both: " << m.a + n.b<< endl;
}

int main()
{
	rahul k;
	rani v;
	k.getdata();
	v.getdata();
	add(k,v);
}
