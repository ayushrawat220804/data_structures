#include <iostream>
using namespace std;
//
class total{
	int n;
	public:
		void getdata(void);
		void putdata(void);
		void add (total&, total&);
};
void total :: getdata(void){
	cout << "enter numbers: ";
	cin >> n;
}
void total :: putdata(void){
	cout << n << endl;
}
void total :: add (total &x, total &y){
	n = x.n + y.n;
}
int main(){
	total r, s, result;
	r.getdata();
	s.getdata();
	result.add(r,s);
	cout << "\nvalue of a as: ";
	r.putdata();
	cout << "value of b as: ";
	s.putdata();
	cout << "addtion of the given data: ";
	result.putdata();
	return 0;
}
