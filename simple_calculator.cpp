#include <iostream>
using namespace std;

int main() {
    double number1, number2, result;
    char operation;

    // Ask the user to enter two numbers and an operator.
    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> number2;

    // Use switch to perform the operation selected by the user.
    switch (operation) {
        case '+':
            result = number1 + number2;
            cout << "Result: " << result << endl;
            break;

        case '-':
            result = number1 - number2;
            cout << "Result: " << result << endl;
            break;

        case '*':
            result = number1 * number2;
            cout << "Result: " << result << endl;
            break;

        case '/':
            // Division by zero is not allowed.
            if (number2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                result = number1 / number2;
                cout << "Result: " << result << endl;
            }
            break;

        default:
            cout << "Invalid operator. Please use +, -, * or /." << endl;
    }

    return 0;
}
