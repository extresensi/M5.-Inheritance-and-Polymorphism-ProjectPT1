// main.cpp
// Client (driver) program for the Factory Workers inheritance hierarchy.
// Demonstrates:
//   - Construction of every class in the hierarchy
//   - Constructor chaining via initializer lists
//   - Code reuse through explicit base-class function calls
//   - NO virtual functions, NO base-class pointers, NO polymorphism
//
// Build:  g++ -std=c++17 -Wall *.cpp -o factory
// Run:    ./factory
 
#include <iostream>
#include <iomanip>
 
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
 
static void banner(const std::string& title) {
    std::cout << "\n==== " << title << " ====\n";
}
 
int main() {
    // Show money values with two decimal places.
    std::cout << std::fixed << std::setprecision(2);
 
    // --- Employee -----------------------------------------------------------
    banner("Employee");
    Employee emp("Alice Carter", 1001, "2020-03-15");
    emp.printEmployee();
 
    // --- ProductionWorker: day and night shift ------------------------------
    banner("ProductionWorker (Day Shift)");
    ProductionWorker pwDay("Ben Rodriguez", 2001, "2021-07-01", 1, 22.50);
    pwDay.printProductionWorker();
 
    banner("ProductionWorker (Night Shift)");
    ProductionWorker pwNight("Carla Singh", 2002, "2022-11-10", 2, 24.75);
    pwNight.printProductionWorker();
 
    // --- ShiftSupervisor ----------------------------------------------------
    banner("ShiftSupervisor");
    ShiftSupervisor ss("Derek Liu", 3001, "2018-05-22", 75000.00, 5000.00);
    ss.printShiftSupervisor();
 
    // --- TeamLeader (derived from ProductionWorker) -------------------------
    banner("TeamLeader");
    TeamLeader tl("Eva Thompson", 4001, "2019-09-30",
                  1,         // shift
                  28.00,     // pay rate
                  300.00,    // monthly bonus
                  40.0,      // required training hours
                  36.5);     // attended training hours
    tl.printTeamLeader();
 
    // --- Mutator demonstration ---------------------------------------------
    banner("Mutators (modify then reprint)");
    pwDay.setPayRate(25.00);
    pwDay.setShift(2);
    pwDay.printProductionWorker();
 
    std::cout << "\nAll objects displayed.\n";
    return 0;
}
 