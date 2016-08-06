//Manny G.


#ifndef Employee_h
#define Employee_h

using namespace std;

class Employee {

public:
	// Explicit value Constructor
    Employee(string name, int id, char _class, int salary)
    {
        this->myName = name;
        this->myId = id;
        this->myClass = _class;
        this->mySalary = salary;
    }

	virtual ~Employee() {}

    // Calculates the salary according to each employees pay
    virtual int Calculate_salary(int monthlyIncome)
    {
        return this->mySalary = (this->mySalary + (monthlyIncome * .6));
    }

    // Displays the statistics of each employees profile
    virtual void display(ostream & out) const;


protected:
    float mySalary;
    char myClass;
private:
	string myName;
    int myId;

};

// Definition of Employee's display()
inline void Employee::display(ostream & out) const
{
	out << "Name: " << myName << "\nId: " << myId << "\nClass: " << myClass << "\nSalary: $" << mySalary << endl;
}

// Overloads the ostream operator for each class
inline ostream & operator<<(ostream & out, const Employee & emp)
{
    emp.display(out);
    return out;
};

#endif


