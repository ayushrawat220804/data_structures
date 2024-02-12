/*
class class_name{
...
public :
...
class_name function_name (class_name object, class_name object){
class_name obejct;
...
return(object);
}
example:
class matrix:{
public:
matrix add(matrix m, matrix n){matrix h;
h.n = m.a + n.a;
return (h);
}
}

function call
matrix a, b , c , result;
result= c.add(a,b);
result.putdata();
*/
#include <iostream>
using namespace std;
class matrix
{
	int item[3][3];
	public:
		void getdata(void);
		void putdata(void);
		matrix add(matrix m ,matrix n)
{
	matrix h;
	int i,j;
	for (i = 0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			{
				h.item[i][j] = m.item[i][j] + n.item[i][j];
			}
		}
	}
	return (h);
}
};
void matrix :: getdata(void)
{
	for (int i = 0; i<3; i++)
	{
		for (int j =0; j<3; j++)
		{
			cin >> item[i][j];
		}
	}
}
void matrix :: putdata(void)
{
	for (int i =0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			cout << item[i][j] << "\t";
		}
		cout << endl;
	}
}
int main ()
{
	matrix a, b, c, result;
	cout << "matrix a: " << endl;
	a.getdata();
	cout << "matrix b: " << endl;
	b.getdata();
	cout << "you entered matrix a elemets as : " << endl;
	a.putdata();
	cout << "you entered matrix b elements as: " << endl;
	b.putdata();
	result = c.add(a,b);
	cout << "addition of both the matrix a , b is: " << endl;
	result.putdata();
	return 0;
}

