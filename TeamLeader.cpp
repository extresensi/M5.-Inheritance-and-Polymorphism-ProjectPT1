// TeamLeader.cpp
// Implementation of TeamLeader.  Chains construction through
// ProductionWorker -> Employee via initializer lists.
 
#include "TeamLeader.h"
#include <iostream>
 
TeamLeader::TeamLeader()
    : ProductionWorker(),
      monthlyBonus(0.0),
      requiredTrainingHours(0.0),
      attendedTrainingHours(0.0) {}
 
TeamLeader::TeamLeader(const std::string& name,
                       int employeeNumber,
                       const std::string& hireDate,
                       int shift,
                       double payRate,
                       double monthlyBonus,
                       double requiredTrainingHours,
                       double attendedTrainingHours)
    : ProductionWorker(name, employeeNumber, hireDate, shift, payRate),
      monthlyBonus(monthlyBonus),
      requiredTrainingHours(requiredTrainingHours),
      attendedTrainingHours(attendedTrainingHours) {}
 
void   TeamLeader::setMonthlyBonus(double monthlyBonus)       { this->monthlyBonus = monthlyBonus; }
void   TeamLeader::setRequiredTrainingHours(double hours)     { this->requiredTrainingHours = hours; }
void   TeamLeader::setAttendedTrainingHours(double hours)     { this->attendedTrainingHours = hours; }
double TeamLeader::getMonthlyBonus() const                    { return monthlyBonus; }
double TeamLeader::getRequiredTrainingHours() const           { return requiredTrainingHours; }
double TeamLeader::getAttendedTrainingHours() const           { return attendedTrainingHours; }
 
void TeamLeader::printTeamLeader() const {
    // Reuse ProductionWorker (which in turn reuses Employee) - no virtual calls.
    printProductionWorker();
    std::cout << "Monthly Bonus:   $" << monthlyBonus           << "\n"
              << "Training Req:    "  << requiredTrainingHours  << " hrs\n"
              << "Training Done:   "  << attendedTrainingHours  << " hrs\n";
}