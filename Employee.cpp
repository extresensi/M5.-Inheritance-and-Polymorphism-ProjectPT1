// Employee.cpp
// Implementation of the Employee base class.
 
#include "Employee.h"
#include <iostream>
 
Employee::Employee()
    : name(""), employeeNumber(0), hireDate("") {}
 
Employee::Employee(const std::string& name,
                   int employeeNumber,
                   const std::string& hireDate)
    : name(name), employeeNumber(employeeNumber), hireDate(hireDate) {}
 
void Employee::setName(const std::string& name)            { this->name = name; }
void Employee::setEmployeeNumber(int employeeNumber)       { this->employeeNumber = employeeNumber; }
void Employee::setHireDate(const std::string& hireDate)    { this->hireDate = hireDate; }
 
std::string Employee::getName() const           { return name; }
int         Employee::getEmployeeNumber() const { return employeeNumber; }
std::string Employee::getHireDate() const       { return hireDate; }
 
void Employee::printEmployee() const {
    std::cout << "Name:            " << name           << "\n"
              << "Employee Number: " << employeeNumber << "\n"
              << "Hire Date:       " << hireDate       << "\n";
}
 