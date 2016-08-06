//Manny G.


#include <iostream>
#include "Chef.h"
#include "Waiter.h"
#include "Employee.h"
#include <list>

using namespace std;

int main ()
{
	// Monthly profit
    int monthlyIncome = 6000;

    // list of pointers to employee objects
    list<Employee*> empList;

    // Constructs employee objects according to their type
    empList.push_back(new Employee("Jeff", 1000, 'O', 15000));
    empList.push_back(new Chef("Igbo", 2000, 'C', 10000, "Nigerian"));
    empList.push_back(new Chef("Amo", 2001, 'C', 10000, "Greek"));
    empList.push_back(new Waiter("John", 3000, 'W', 3000, 3, 1000));
    empList.push_back(new Waiter("Adam", 3001, 'W', 3000, 5, 1500));
    empList.push_back(new Waiter("Amy", 3002, 'W', 3000, 7, 1700));

    cout << "Welcome to Kookoo Warenta's Employee Database" << endl;
    cout << "*********************************************" << endl;

    // For loop to display contents of each employee
    Employee * ptr;
    for (list<Employee*>::iterator it = empList.begin();
         it!= empList.end(); it++)
    {
        ptr = *it;
        ptr->Calculate_salary(monthlyIncome);
        cout << *ptr << endl;
        delete ptr;
    }

    cout << "****************************" << endl;
    cout << "End of the Employee Database" << endl;

    return 0;
}
