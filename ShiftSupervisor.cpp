// ShiftSupervisor.cpp
// Implementation of ShiftSupervisor.  Chains construction to Employee.
 
#include "ShiftSupervisor.h"
#include <iostream>
 
ShiftSupervisor::ShiftSupervisor()
    : Employee(), annualSalary(0.0), annualBonus(0.0) {}
 
ShiftSupervisor::ShiftSupervisor(const std::string& name,
                                 int employeeNumber,
                                 const std::string& hireDate,
                                 double annualSalary,
                                 double annualBonus)
    : Employee(name, employeeNumber, hireDate),
      annualSalary(annualSalary),
      annualBonus(annualBonus) {}
 
void   ShiftSupervisor::setAnnualSalary(double annualSalary) { this->annualSalary = annualSalary; }
void   ShiftSupervisor::setAnnualBonus(double annualBonus)   { this->annualBonus = annualBonus; }
double ShiftSupervisor::getAnnualSalary() const              { return annualSalary; }
double ShiftSupervisor::getAnnualBonus() const               { return annualBonus; }
 
void ShiftSupervisor::printShiftSupervisor() const {
    printEmployee();    // reuse base-class output
    std::cout << "Annual Salary:   $" << annualSalary << "\n"
              << "Annual Bonus:    $" << annualBonus  << "\n";
}
 