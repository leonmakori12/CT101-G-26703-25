#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int age;
    double examScore;

    // Ask the applicant to enter the required details.
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter student age: ";
    cin >> age;

    cout << "Enter exam score: ";
    cin >> examScore;

    // Check that the age and score entered are sensible values.
    if (age < 0 || examScore < 0 || examScore > 100) {
        cout << "Invalid age or exam score entered." << endl;
        return 0;
    }

    // First check the age, then check the exam score.
    cout << "\n--- Admission Decision ---" << endl;
    cout << "Applicant: " << studentName << endl;

    if (age >= 18) {
        if (examScore >= 50) {
            cout << "Decision: Admitted" << endl;
        } else {
            cout << "Decision: Not Admitted - Low Score" << endl;
        }
    } else {
        cout << "Decision: Not Admitted - Underage" << endl;
    }

    return 0;
}
