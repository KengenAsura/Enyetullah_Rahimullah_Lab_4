#include <string>
#include <cstdlib>
#include "Manager.h" // Include the Manager header file
#include "Employee.h" // Include the Employee header file

using namespace std;

// Constructor for Manager class
Manager::Manager(string manager_name, double manager_wage, double manager_hour, double manager_bonus) : Employee(manager_name, manager_wage, manager_hour)
{
    bonus = manager_bonus;
}

// Function to calculate pay for a manager
double Manager::calcPay()
{
  double base_pay;
  base_pay = Employee::calcPay();
  return base_pay + bonus; // Return the total pay (base pay + bonus)
}
