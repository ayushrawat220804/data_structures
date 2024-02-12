#include <iostream>
using namespace std;
// object as function arguments by value
/*
syntax:
class class_name
{
data member; // by default private
public :
data member;
member function;
data_type function_name(class_name,class_name);
};

functio definition syntax:
void class_name :: function_name(class_name object, class_name object1)
{
function body; // do work using above objects
}

object declaration and function call or passing object (value):
int main()
{
total r, s , result;
r.getdata();
s.getdata();
r.putdata();
s.putdata();
result.add (r,s); // passing objects
results.putdata();


