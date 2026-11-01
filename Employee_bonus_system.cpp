// Program to calculate employee bonuses and total salaries
// for five employees using a for loop.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    double basicSalary, bonus, totalSalary;

    // Loop to enter details of five employees
    for (int i = 1; i <= 5; i++)
    {
        cout << "\nEnter details for Employee " << i << endl;

        cout << "Enter employee name: ";
        cin >> name;

        cout << "Enter basic salary: ";
        cin >> basicSalary;

        // Calculate bonus (5% of basic salary)
        bonus = 0.05 * basicSalary;

        // Calculate total salary
        totalSalary = basicSalary + bonus;

        // Display employee report
        cout << "\nEmployee Report" << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }

    return 0;
}