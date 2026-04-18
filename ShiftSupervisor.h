// ShiftSupervisor.h
// Derived from Employee.  Adds annual salary and annual production bonus.
 
#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H
 
#include "Employee.h"
 
class ShiftSupervisor : public Employee {
private:
    double annualSalary;    // yearly salary in dollars
    double annualBonus;     // yearly production bonus in dollars
 
public:
    // Default constructor
    // Precondition:  none
    // Postcondition: Employee default-constructed, salary and bonus = 0
    ShiftSupervisor();
 
    // Parameterized constructor (chains via initializer list)
    // Precondition:  annualSalary >= 0, annualBonus >= 0
    // Postcondition: all members initialized to given values
    ShiftSupervisor(const std::string& name,
                    int employeeNumber,
                    const std::string& hireDate,
                    double annualSalary,
                    double annualBonus);
 
    // Mutators / accessors
    // Precondition:  value >= 0 for setters
    // Postcondition: member updated / returned
    void   setAnnualSalary(double annualSalary);
    void   setAnnualBonus(double annualBonus);
    double getAnnualSalary() const;
    double getAnnualBonus() const;
 
    // Prints Employee info (via printEmployee()) followed by
    // ShiftSupervisor-specific data.
    // Precondition:  none
    // Postcondition: formatted output printed; object unchanged
    void printShiftSupervisor() const;
};
 
#endif
 