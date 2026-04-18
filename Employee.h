// Employee.h
// Base class representing a generic factory employee.
// Stores name, employee number, and hire date.
 
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
 
#include <string>
 
class Employee {
private:
    std::string name;       // full employee name
    int employeeNumber;     // unique ID number
    std::string hireDate;   // date hired (e.g. "2023-05-14")
 
public:
    // Default constructor
    // Precondition:  none
    // Postcondition: name = "", employeeNumber = 0, hireDate = ""
    Employee();
 
    // Parameterized constructor
    // Precondition:  empNum >= 0
    // Postcondition: all members initialized to given values
    Employee(const std::string& name,
             int employeeNumber,
             const std::string& hireDate);
 
    // Mutators (setters)
    // Precondition:  valid string / non-negative int
    // Postcondition: corresponding member updated
    void setName(const std::string& name);
    void setEmployeeNumber(int employeeNumber);
    void setHireDate(const std::string& hireDate);
 
    // Accessors (getters)
    // Precondition:  none
    // Postcondition: returns requested member unchanged
    std::string getName() const;
    int         getEmployeeNumber() const;
    std::string getHireDate() const;
 
    // Prints all Employee data to stdout.
    // Precondition:  none
    // Postcondition: formatted employee info printed; object unchanged
    void printEmployee() const;
};
 
#endif
 