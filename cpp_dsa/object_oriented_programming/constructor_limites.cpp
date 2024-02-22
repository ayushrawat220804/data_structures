#include <iostream>
using namespace std;
/*
characteristics of constructors

1. they should be decalred in the public section, so that its objects can be created in any function.
2. they are invoked directly when an object is created.
3. they don't have return type, not even void and hence can't return any values.
constructor can't be friend fuction. 
they can't be inherited.
like other c++ fucntions, thry can have default arguments.
constructors can't be virtual.
constructors can be inside the class definition and outside the class definitoin.

// THERE ARE TOTAL 3 TYPES OF CONSTRUCTORS IN CPP
DEFAULT CONSTRUCTOR
PARAMETERIZED CONSTRUCTOR
COPY CONSTRUCTORS


LIMITATIONS OF CONSTRUCTORS:
1. no return tyoe - a constructor cannot return a result which means that we cannot signal an error during the object intitalization, the only way of doing it is to throw an exception from a constructor.

2. naming - a constructor should have the same name as the class, which means we cannot have two constructors that both take a single arguments.

3. compile time bound - at the time when we create an object we must specify the name of a concrete class which is lnown at compile time. there is no way of dynamic binding constructos at run time.

4. the is no virtual constructor - we cannot declare a virtual constructor. we should specify the exact type of the object at compile time, so that the compiler can allocate memory for that specific type, if we are constructing, derived object, the compiler calls the base class consturctor first and the derived class hasn't been initialized yet. this is the reason why we cannot call virtual methods from the constructor.

