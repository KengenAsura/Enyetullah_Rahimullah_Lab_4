# Enyetullah_Rahimullah_Lab_4
# Manager Pay Calculator

This C++ program manages information about managers, calculates their pay, and determines the highest-paid manager along with the average salary.

How It Works:
The program first asks the user to input the number of managers. After which, a loop runs several times, equivalent to the number of managers. The user inputs details relating to the manager, such as his name, hours worked, bonus, and wage. Then, the program calculates the total payout of each manager and compares it with the highedt_paid_manager, and if the new manager's payout is higher than the older highest-paid one, it will replace it. The total payout of all of the managers is also added together. Then, the average amount of all of the managers is calculated, and at the end, the highest-paid manager is printed along with the average amount earned by the managers.

Getting Started:

Prerequisites:
1) C++ compiler
2) Basic understanding of C++ programming

Usage
1) Run the compiled program.
2) Enter the number of managers when prompted.
3) Follow the prompts to enter the information for each manager.
4) The program will display the highest-paid manager and the average pay.

Files
1) main.cpp: Contains the main program logic.
2) Employee.h and Employee.cpp: Define and implement the Employee class.
3) Manager.h and Manager.cpp: Define and implement the Manager class, which inherits from Employee.
