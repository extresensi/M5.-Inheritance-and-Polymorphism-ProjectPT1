// ProductionWorker.cpp
// Implementation of ProductionWorker.  Uses initializer lists to chain
// construction to the Employee base class (no polymorphism).
 
#include "ProductionWorker.h"
#include <iostream>
 
ProductionWorker::ProductionWorker()
    : Employee(), shift(1), payRate(0.0) {}
 
ProductionWorker::ProductionWorker(const std::string& name,
                                   int employeeNumber,
                                   const std::string& hireDate,
                                   int shift,
                                   double payRate)
    : Employee(name, employeeNumber, hireDate),   // constructor chaining
      shift(shift),
      payRate(payRate) {}
 
void   ProductionWorker::setShift(int shift)        { this->shift = shift; }
void   ProductionWorker::setPayRate(double payRate) { this->payRate = payRate; }
int    ProductionWorker::getShift() const           { return shift; }
double ProductionWorker::getPayRate() const         { return payRate; }
 
void ProductionWorker::printProductionWorker() const {
    // Reuse base-class behavior (explicit call - no virtual dispatch).
    printEmployee();
    std::cout << "Shift:           "
              << shift << (shift == 1 ? " (Day)" : " (Night)") << "\n"
              << "Hourly Pay Rate: $" << payRate << "\n";
}
 