// ProductionWorker.h
// Derived from Employee.  Adds shift and hourly pay rate.
 
#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
 
#include "Employee.h"
 
class ProductionWorker : public Employee {
private:
    int    shift;       // 1 = day, 2 = night
    double payRate;     // hourly pay rate in dollars
 
public:
    // Default constructor
    // Precondition:  none
    // Postcondition: Employee default-constructed, shift=1, payRate=0.0
    ProductionWorker();
 
    // Parameterized constructor (chains via initializer list)
    // Precondition:  shift is 1 or 2, payRate >= 0
    // Postcondition: all members initialized to given values
    ProductionWorker(const std::string& name,
                     int employeeNumber,
                     const std::string& hireDate,
                     int shift,
                     double payRate);
 
    // Mutators / accessors
    // Precondition:  shift in {1,2}; payRate >= 0
    // Postcondition: member updated / returned
    void   setShift(int shift);
    void   setPayRate(double payRate);
    int    getShift() const;
    double getPayRate() const;
 
    // Prints Employee info (via printEmployee()) followed by
    // ProductionWorker-specific data.
    // Precondition:  none
    // Postcondition: formatted output printed; object unchanged
    void printProductionWorker() const;
};
 
#endif
 