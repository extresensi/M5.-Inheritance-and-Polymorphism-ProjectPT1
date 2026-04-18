// TeamLeader.h
// Derived from ProductionWorker (multi-level inheritance).
// Adds monthly bonus, required training hours, and attended training hours.
 
#ifndef TEAMLEADER_H
#define TEAMLEADER_H
 
#include "ProductionWorker.h"
 
class TeamLeader : public ProductionWorker {
private:
    double monthlyBonus;            // bonus paid each month
    double requiredTrainingHours;   // training hours required per year
    double attendedTrainingHours;   // training hours actually attended
 
public:
    // Default constructor
    // Precondition:  none
    // Postcondition: ProductionWorker default-constructed, all added members = 0
    TeamLeader();
 
    // Parameterized constructor (chains all the way back to Employee)
    // Precondition:  non-negative numeric values; shift in {1,2}
    // Postcondition: all members initialized to given values
    TeamLeader(const std::string& name,
               int employeeNumber,
               const std::string& hireDate,
               int shift,
               double payRate,
               double monthlyBonus,
               double requiredTrainingHours,
               double attendedTrainingHours);
 
    // Mutators / accessors
    // Precondition:  value >= 0
    // Postcondition: member updated / returned
    void   setMonthlyBonus(double monthlyBonus);
    void   setRequiredTrainingHours(double hours);
    void   setAttendedTrainingHours(double hours);
    double getMonthlyBonus() const;
    double getRequiredTrainingHours() const;
    double getAttendedTrainingHours() const;
 
    // Prints ProductionWorker info (via printProductionWorker())
    // followed by TeamLeader-specific data.
    // Precondition:  none
    // Postcondition: formatted output printed; object unchanged
    void printTeamLeader() const;
};
 
#endif
 