#include <iostream>
using namespace std;
// friend function or null function - is a function which helps us to access class members data , but friend function it self is not a member of the class.
// inshort friend function is like a friend who can access class data without being a member.
/*

class definition synatx;
class class_name{
...
...
public:
...
...
friend return_type function_name(arguments); - METHOD 1
or
friend retrun_type function_name(class_name object); - METHOD 2
}

CLASS DEFINITON EXAMPLE
class total
{
int n;
...
public:
void getdata();
void putdata();
friend int add(void);
friend int add(total k); // total is class_name k is object
}

function definition syntax:
return_type function_name_(arguments)
{
class_name object
object.function_name()*:
return 0;
}

or

FUNCTION DEFINITION SYNTAX for obejct:
return_type function_name(class_name object)
{
object.function_name();
return 0;
}

FUNCTION DEFINITION EXAMPLE:
int add(void)
{
total k;
k.n;
k.getdata();
return 0;
}
FUNCTION DEFINITION EXAMPLE:
int add(total k)
{
k.n;
k.getdata();
return 0;
}

FUNCTION CALL
add(); // in friend fn we have to call it without object
if it return any integer then:
int sum;
sum = add();

FUNCTION CALL FOR OBJECT:
add(p);
if it return any integer and passing object:
int sum;
sum = add(p);
where p is object of main function;



