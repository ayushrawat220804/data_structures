#include <iostream>
using namespace std;
// advanced features of friend functions
/*

1. member function of one class can be friend functions of another class.
in real life you need atleast on person to be a friend with you can't be friend of your own same goes here

ex:
class rahul
{
int a;
int add();
};
class rani
{
int b;
friend int rahul :: add(); // add() of class rahul is friend of class rani.
...
};

