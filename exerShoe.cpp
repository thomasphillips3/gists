/*
Example 7: Next steps with decomposition - Your first day on the job

You have just gotten a position as a salesperson for the ExerShoe company, specializing in high-end exercise shoes costing around $225 per pair. Your boss has given you three options for compensation, which you must choose before you begin your first day:

- Straight salary of $600 per week;
- A salary of $7.00 per hour plus a 10% commission on sales;
- No salary, but 20% commissions and $20 for each pair of shoes sold

Write a program to help decide the best choice of compensation.
*/

// Thomas Phillips
// July 21, 2017

#include <iostream>

using namespace std;

const double HOURLY_RATE = 7.00;

const int HOURS_PER_WEEK = 40;

void GetInput(int userInput);
int Method1(int weeklySales);
int Method2(int weeklySales);
int Method3(int weeklySales);

int weeklySales = 0;
int weeklySalary = 0;
int yearlySalaryPaidWeekly = 0;
int yearlySalaryOnCommission = 0;
int yearlySalaryCommissionOnly = 0;

int main() {

  GetInput(weeklySales);
  yearlySalaryPaidWeekly = Method1(weeklySalary);
  yearlySalaryOnCommission = Method2(weeklySalary);
  yearlySalaryCommissionOnly = Method3(weeklySalary);

  cout << endl;
  cout << "With a weekly salary of $" << weeklySalary;
  cout << ", yearly Salary = $" << yearlySalaryPaidWeekly << endl;

  cout << "With commission of 10% and $";
  cout << HOURLY_RATE << " per hour";
  cout << ", yearly Salary = $" << yearlySalaryOnCommission << endl;

  cout << "With commission of 20% and $20 per shoe sold";
  cout << ", yearly Salary = $" << yearlySalaryCommissionOnly << endl;
}

void GetInput(int userInput) {
  cout << "Enter weekly sales: ";
  while (!(cin >> userInput) || userInput < 0) {
    cerr << "Bad input." << endl;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Enter weekly sales: ";
  }
  weeklySales = userInput;

  cout << "Enter weekly salary: $";
  while (!(cin >> userInput) || userInput < 0) {
    cerr << "Bad input." << endl;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "Enter weekly salary: ";
  }
  weeklySalary = userInput;
}

int Method1(int weeklySalary) {
  return weeklySalary * 52;
}

int Method2(int weeklySalary) {
  double commission = 0.10;
  return ((HOURLY_RATE * HOURS_PER_WEEK) + (weeklySalary * commission))*52;
}

int Method3(int weeklySalary) {
  double commission = 0.20;
  return ((weeklySalary * commission) + (weeklySales*20) * 52);
}
