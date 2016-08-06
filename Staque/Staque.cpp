//Manny G.

// Staque.cpp


#include "Stack.h"
#include "Staque.h"
using namespace std;


Staque::Staque()
{
    odds.order = 0; // set odds order to 0
    evens.order = 1; // set evens order to 1
}


void Staque::pop() // definition of pop function
{
    if (!evens.empty())
    {
        evens.pop(); // pops even number if stack isn't empty
    }
    else if (!odds.empty())
    {
        odds.pop(); // pops odd number if stack isn't empty
    }
    else
    {
        cout << "Staque is empty"<< endl;

    }
}

void Staque::push(const StaqueElement & value)
{
    if(value % 2 == 0) // even number push on stack
    {
        evens.push(value);
    }
    else // odd number push on stack
    {
        odds.push(value);
    }
}


ostream & operator<<(ostream & out, const Staque & s) // overloading insertion operator
{
    s.evens.display(out);
    s.odds.display(out);
    return out;
}

