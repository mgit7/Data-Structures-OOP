//Manny G.

// Stack.h

#include <iostream>
using namespace std;

#ifndef STACK
#define STACK

typedef int StackElement;

class Stack
{
 public:

   Stack(); // default constructor

  Stack(const Stack & original); // explicit value constructor

  ~Stack(); // destructor

  const Stack & operator= (const Stack & rightHandSide); // overloading assignment operator

  bool empty() const; // empty function


  void push(const StackElement & value); // push values on stack

  void display(ostream & out) const; // displays list

  StackElement pop(); // pop function

  StackElement top() const; // check top

  void remove(); // removes nodes according to even or odd

  int order; // keeps track of even and odd objects

 private:

   class Node
   {
    public:
      StackElement data; // variable of type data
      Node * next;     // pointer to next node
       Node * previous; // pointer to previous node

       Node(StackElement value, Node * link = 0, Node * prev=0) // Constructor
       : data(value), next(link), previous(prev)

      {}
  };

  typedef Node * NodePointer;

    NodePointer myTop; // pointer to top
    NodePointer tail; // pointer to bottom of stack


    int currentSize;

}; // end of class declaration

ostream & operator<<(ostream & out, const Stack & s); // overload ostream operator


#endif
