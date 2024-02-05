#include <iostream>
using namespace std;
/*
destructors
destructos are functons that are complimentary to constructors.
a destructor, as the name implies, is used to destroy the objects that have been created by using constructor.
a destructor is a functoin that has the same name as that of the class but is prefixed with a " ~ "(tilde sign)

characteristics of destructors
1. 
destructors functions are invoked automatically when the objects are destoryed/
2. we can have only one dectructor for a class, i.e. destructors can't be overleaded
3. no argumments can be provided to a destructor, neither does it return any value.
4. destructor can't be inherited.
5. a destructor may not be static.

limitations of destructors
1. they are case sensitive
2. they are not good for big programs having thousands lines of code.


