#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// The rate charged for each unit of water consumed.
// The question does not give a rate, so the user will enter it.
const double DISCOUNT_RATE = 0.10;

string customerName;
double unitsConsumed, ratePerUnit;
double billBeforeDiscount, discount, finalAmount;

// This function asks the customer for their details.
void getCustomerDetails() {
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter number of water units consumed: ";
    cin >> unitsConsumed;

    cout << "Enter the rate per unit: ";
    cin >> ratePerUnit;
}

// This function calculates the bill before any discount.
void calculateBill() {
    billBeforeDiscount = unitsConsumed * ratePerUnit;
}

// This function gives a 10% discount when usage is more than 100 units.
void applyDiscount() {
    if (unitsConsumed > 100) {
        discount = billBeforeDiscount * DISCOUNT_RATE;
    } else {
        discount = 0;
    }

    finalAmount = billBeforeDiscount - discount;
}

// This function displays the customer's water bill.
void displayBill() {
    cout << fixed << setprecision(2);

    cout << "\n========== WATER BILL ==========" << endl;
    cout << "Customer name:          " << customerName << endl;
    cout << "Units consumed:         " << unitsConsumed << endl;
    cout << "Rate per unit:          " << ratePerUnit << endl;
    cout << "Bill before discount:   " << billBeforeDiscount << endl;
    cout << "Discount:               " << discount << endl;
    cout << "Final amount payable:   " << finalAmount << endl;
    cout << "================================" << endl;
}

int main() {
    // Call each function in the order needed to prepare the bill.
    getCustomerDetails();

    // Make sure the customer has entered valid values.
    if (unitsConsumed < 0 || ratePerUnit < 0) {
        cout << "Please enter values that are zero or greater." << endl;
        return 0;
    }

    calculateBill();
    applyDiscount();
    displayBill();

    return 0;
}
