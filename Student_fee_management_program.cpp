// Program to manage student fee payments using a class and object.
// It allows the user to enter student details, make a fee payment,
// and display the remaining fee balance.

#include <iostream>
#include <string>
using namespace std;

// Create a Student class
class Student
{
    private:
        string studentName;
        int admissionNumber;
        double feeBalance;

    public:

        // Function to input student details
        void inputStudent()
        {
            cout << "Enter student name: ";
            getline(cin, studentName);

            cout << "Enter admission number: ";
            cin >> admissionNumber;

            cout << "Enter fee balance: ";
            cin >> feeBalance;
        }

        // Function to make a fee payment
        void makePayment()
        {
            double payment;

            cout << "\nEnter payment amount: ";
            cin >> payment;

            // Check whether payment is valid
            if (payment > 0 && payment <= feeBalance)
            {
                feeBalance = feeBalance - payment;

                cout << "Payment successful!" << endl;
            }
            else
            {
                cout << "Invalid payment amount!" << endl;
            }
        }

        // Function to display student fee status
        void displayStatus()
        {
            cout << "\nStudent Fee Status" << endl;
            cout << "Student Name: " << studentName << endl;
            cout << "Admission Number: " << admissionNumber << endl;
            cout << "Remaining Fee Balance: " << feeBalance << endl;

            if (feeBalance == 0)
            {
                cout << "Fee Status: Fully Paid" << endl;
            }
            else
            {
                cout << "Fee Status: Balance Pending" << endl;
            }
        }
};

int main()
{
    // Create an object of the Student class
    Student myStudent;

    // Input student details
    myStudent.inputStudent();

    // Process fee payment
    myStudent.makePayment();

    // Display updated fee status
    myStudent.displayStatus();

    return 0;
}