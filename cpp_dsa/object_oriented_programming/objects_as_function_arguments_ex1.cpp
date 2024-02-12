#include <iostream>
using namespace std;
// example of objects as function arguments
class total{
	int n; // private data 
	public:
		void getdata(void);
		void putdata(void);
		void add (total, total);
};
void total :: getdata(void)
{
	cout << "enter numbers: ";
	cin >> n;
}
void total :: putdata(void)
{
	cout << n << endl;
}
void total :: add(total x, total y)
{
	n = x.n + y.n;
}
int main()
{
	total r, s, result;
	r.getdata();
	s.getdata();
	cout << "value of a: ";
	r.putdata();
	cout << "value of b: ";
	s.putdata();
	result.add(r,s);
	cout << "addition: ";
	result.putdata();
	return 0;
}
