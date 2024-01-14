#include <iostream>
using namespace std;
// 2nd example of objects as function arguments
class matrix
{
	private:
		int item[3][3]; // 3 by 3 matrix , i as x axis, j as y axis
	public:
		void getdata(void);
		void putdata (void);
		void add(matrix, matrix); // passing 2 objects so 2 times class name which is matrix
};
void matrix :: getdata(void)
{
	for (int i=0; i<3;i++)//outer forloop for rows
	{
		for (int j=0; j<3; j++) // inner forloop for columns
		{
			cin >> item[i][j];
		}
	}
}
void matrix :: putdata(void)
{
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			cout << item [i][j] << "\t" ;
		}
		cout << endl;
	}
}
void matrix :: add (matrix m, matrix n)// matrix is class name and m,n are object name
{
 	int i,j;
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			item[i][j] = m.item[i][j] + n.item[i][j];
		}
	}
}
int main(){
	matrix a, b, result;
	cout << "matrix a:\n";
	a.getdata();
	cout << "matrix b:\n";
	b.getdata();
	cout << "you entered matrix a as: \n";
	a.putdata();
	cout << "you entered matrix b as: \n";
	b.putdata();
	cout << "addition of both matrix: \n";
	result.add(a,b);
	result.putdata();
	return 0;
	
}

