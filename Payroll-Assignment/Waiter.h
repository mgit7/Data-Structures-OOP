//Manny G.

#ifndef Waiter_h
#define Waiter_h


#include "Employee.h"

using namespace std;

class Waiter:public Employee
{
public:
	// Explicit value constructor
    Waiter(string name, int id, char _class, int salary, int yrs, int tips);

    // Calculates the salary according to each employees pay
    int Calculate_salary(int salary)
    {
        return this->mySalary = (this->mySalary + this->tips);
    }

    // Displays the statistics of each employees profile
    virtual void display(ostream & out) const;

private:
    int years_of_service;
    int tips;


};

// Waiter's Constructor
inline Waiter::Waiter(string name, int id, char _class, int salary, int yrs, int tips)
:Employee( name, id, _class, salary ), years_of_service(yrs), tips(tips)
         {
		 }
// Waiter's Display function
inline void Waiter::display(ostream & out) const
{
	Employee::display(out);
	out << "Years of Service: " << years_of_service << endl;
}
#endif
