//Manny G.

//Stack.cpp

#include <iostream>
using namespace std;

#include "Stack.h"

//--- Definition of Stack constructor
Stack::Stack()
{
	myTop = 0;
	order = 1;
	currentSize = 0;
}

//--- Definition of Stack destructor
Stack::~Stack()
{
   // Set pointers to run through the stack
   Stack::NodePointer currPtr = myTop,  // node to be deallocated
                      nextPtr;          // its successor
   while (currPtr != 0)
   {
      nextPtr = currPtr->next;
      delete currPtr;
      currPtr = nextPtr;
   }
}

//--- Definition of empty()
bool Stack::empty() const
{
   return (myTop == 0);
}

//--- Definition of push()
void Stack::push(const StackElement & value)
{
    if(order) //when even insert in front
    {
        myTop = new Stack::Node(value, myTop);
    }
    else // when odd insert in back
    {
        if(currentSize == 0)
        {
           Stack::Node * newNode = new Stack::Node(value, myTop);
            tail = myTop = newNode;
        }
        else
        {
            Stack::Node * newNode = new Stack::Node(value, 0);
            newNode->previous = tail;
            tail->next = newNode;

            tail = newNode;

        }
    }

    currentSize++;
}

//--- Definition of display()
void Stack::display(ostream & out) const
{
   Stack::NodePointer ptr;
   for (ptr = myTop; ptr != 0; ptr = ptr->next) //output data to screen
      out << ptr->data << endl;
}



StackElement Stack::pop()
{
    if(!empty())
    {
        StackElement temp = this->top();
        this->remove();
        return temp;

    }
    else
    {
        cerr << "*** Stack is empty "
        " -- returning garbage ***\n";
        StackElement * temp = new(StackElement);
        StackElement garbage = *temp;     // "Garbage" value
        delete temp;
        return garbage;
    }
}

//--- Definition of top()
StackElement Stack::top() const
{
   if (!empty())
      return (myTop->data);
   else
   {
      cerr << "*** Stack is empty "
              " -- returning garbage ***\n";
      StackElement * temp = new(StackElement);
      StackElement garbage = *temp;     // "Garbage" value
      delete temp;
      return garbage;
   }
}

//--- Definition of pop()
void Stack::remove()
{
   if (!empty())
   {
       if(order) // delete node at the beginning of list
       {
           Stack::NodePointer ptr = myTop;
           myTop = myTop->next;
           delete ptr;
           currentSize--;
       }
       else // delete node from end of list
       {
           Stack::NodePointer temp = tail;
           tail = tail->previous;
           if(tail != NULL)
               tail->next = NULL;
           delete temp;
           currentSize--;
       }

   }
   else
      cerr << endl << "Staque is empty -- can't remove that type of value \n";
}

ostream & operator<<(ostream & out, const Stack & s) // overloading insertion operator
{
    s.display(out);
    return out;
}
