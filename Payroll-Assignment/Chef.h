//Manny G.


#ifndef Chef_h
#define Chef_h
#include "Employee.h"
using namespace std;

class Chef: public Employee
{
public:

	// Explicit value constructor
  Chef(string name, int id, char _class, int salary, string exp);

    int Calculate_salary(int monthlyIncome)
    {
        return this->mySalary = (this->mySalary + (monthlyIncome * .2));
    }
    
    virtual void display(ostream & out) const;


private:
    string expertise;

};

// Chef's Constructor
inline Chef::Chef(string name, int id, char _class, int salary, string exp) // just added
:Employee( name, id, _class, salary ), expertise( exp )
         {
		 }

// Chef's Display Function
inline void Chef::display(ostream & out) const
{
	Employee::display(out);
    out << "Expertise: " << expertise << endl;
}

#endif
