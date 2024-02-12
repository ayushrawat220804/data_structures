#include <iostream>
using namespace std;
// returning object
/* 
class definition syntax
class class_name
{
...
...
public:
...
...
class_name function_name (class_name,class_name);
};
example:
class matrix
{
int a;
public:
void getdata();
void putdata();
matrix add (matrix m, matrix);
}

function definition syntax:
class_name class_name :: function_name(class_name object)
{
class_name object ; // create new object
task;
return (object);
}

function definition example :
matrix matrix :: add (matrix m, matrix n){
matrix h;
h.n = m.a +n.a;
return (h);
}

function call
matrix a, b, c, result;
result = c.add(a, b);
result.putdata();

