//Manny G.

// Staque.h


#include <iostream>
#include "Stack.h"

using namespace std;

#ifndef STAQUE
#define STAQUE

typedef int StaqueElement;

class Staque
{

private:

public:

    Staque();
    void push(const StaqueElement & value); // push function
    void pop(); // pop function
    Stack evens; // initialize object for evens
    Stack odds; // initialize object for odds


}; // end of class declaration

ostream & operator<<(ostream & out, const Staque & s); // overloading insertion operator

#endif
