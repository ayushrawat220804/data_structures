#include <iostream>
using namespace std;
class sum{
	int a, b;
	public :
		void getnumber(void);
		void putdata(void);
		friend sum add(sum s)
		{
			sum temp;
			temp.a = s.a + s.b;
			return temp;
		}
};
void sum :: getnumber(void){
	cout << "enter any two numbers : " << endl;
	cin >> a >> b;
}
void sum :: putdata(void){
	cout << "addition : " << a;
}
int main(){
	sum z, result;
	z.getnumber();
	result = add(z);
	result.putdata();
	return 0;

}

