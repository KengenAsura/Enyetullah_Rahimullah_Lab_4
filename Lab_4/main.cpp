// Enyetullah Rahimullah
// This is a program takes infos of a manager and calculates which manager is paid the highest and calculates the average pay of managers

#include <iostream>
#include <string>
#include <iomanip>
#include "Manager.h"

using namespace std;

int main()
{
  // Number of Managers
  int num_of_managers;
  cout << "Enter number of managers: ";
  cin >> num_of_managers;
  cout << endl;

  // Create an array of pointers to Manager objects
  Manager** managers = new Manager*[num_of_managers];

  for (int i = 0; i < num_of_managers; i++)
  {
    string name;
    double wage, hours, bonus;

    cout << "Enter manager " << i << " name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter manager " << i << " hourly wage: ";
    cin >> wage;

    cout << "Enter manager " << i << " hours worked: ";
    cin >> hours;

    cout << "Enter manager " << i << " bonus: ";
    cin >> bonus;

    cout << endl;

    // Create a Manager object and store the pointer in the array
    managers[i] = new Manager(name, wage, hours, bonus);
  }

  double total_pay = 0;
  double highest_pay = 0;
  Manager* highest_paid_manager = nullptr;

  // Calculate total pay and find the highest paid manager
  for (int i = 0; i < num_of_managers; ++i)
  {
    double pay = managers[i]->calcPay();
    total_pay += pay;

    if (pay > highest_pay)
    {
      highest_pay = pay;
      highest_paid_manager = managers[i];
    }
  }

  // Calculate average pay
  double average_pay = total_pay / num_of_managers;

  cout << "Highest paid manager is " << highest_paid_manager->getName() << " who is paid $" << fixed << setprecision(2) << highest_pay << endl;
  cout << "Average pay is $ " << fixed << setprecision(2) << average_pay << endl;

  // Clean up dynamically allocated memory
  for (int i = 0; i < num_of_managers; ++i)
  {
    delete managers[i];
  }

  delete[] managers;

  return 0;
}
