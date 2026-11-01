// Program to allow repeated money withdrawals
// while the account balance is sufficient.

#include <iostream>
using namespace std;

int main()
{
    double balance, withdrawal;

    // Enter initial account balance
    cout << "Enter account balance: ";
    cin >> balance;

    // Continue as long as the balance is greater than zero
    while (balance > 0)
    {
        cout << "\nEnter withdrawal amount (0 to stop): ";
        cin >> withdrawal;

        // Stop if the customer chooses to stop
        if (withdrawal == 0)
        {
            cout << "Withdrawal stopped." << endl;
            break;
        }

        // Check whether the withdrawal exceeds the balance
        if (withdrawal > balance)
        {
            cout << "Insufficient balance!" << endl;
            break;
        }

        // Deduct withdrawal from account balance
        balance = balance - withdrawal;

        // Display remaining balance
        cout << "Remaining balance: " << balance << endl;
    }

    // Display final balance
    cout << "\nFinal account balance: " << balance << endl;

    return 0;
}