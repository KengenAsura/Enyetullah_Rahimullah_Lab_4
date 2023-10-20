#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h" //Include the Employee header file

class Manager : public Employee // Define the Manager class, inheriting from Employee
{
 private:
  double bonus;
 public:
  // Constructor for Manager class
  Manager(string name, double wage, double hours, double bonus);

  // Function to calculate pay for a manager
  double calcPay();
};
#endif // MANAGER_H
