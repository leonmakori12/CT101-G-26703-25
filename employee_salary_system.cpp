#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Variables used to store the employee's details and salary.
string employeeName;
double basicSalary, overtimeHours, ratePerHour;
double overtimePay, netSalary;

// This function asks the user to enter employee details.
void getEmployeeDetails() {
    cout << "Enter employee name: ";
    getline(cin, employeeName);

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter overtime hours worked: ";
    cin >> overtimeHours;

    cout << "Enter overtime rate per hour: ";
    cin >> ratePerHour;
}

// This function calculates the employee's overtime pay.
void calculateOvertimePay() {
    overtimePay = overtimeHours * ratePerHour;
}

// This function adds overtime pay to the basic salary.
void calculateNetSalary() {
    netSalary = basicSalary + overtimePay;
}

// This function displays a simple salary payslip.
void displayPayslip() {
    cout << fixed << setprecision(2);

    cout << "\n========== EMPLOYEE PAYSLIP ==========" << endl;
    cout << "Employee name: " << employeeName << endl;
    cout << "Basic salary:  " << basicSalary << endl;
    cout << "Overtime pay:  " << overtimePay << endl;
    cout << "Net salary:    " << netSalary << endl;
    cout << "======================================" << endl;
}

int main() {
    // Call the functions in the correct order.
    getEmployeeDetails();

    // Check that the entered amounts and hours are not negative.
    if (basicSalary < 0 || overtimeHours < 0 || ratePerHour < 0) {
        cout << "Please enter values that are zero or greater." << endl;
        return 0;
    }

    calculateOvertimePay();
    calculateNetSalary();
    displayPayslip();

    return 0;
}
