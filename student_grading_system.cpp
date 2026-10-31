#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int marks;
    char grade;

    // Ask the user to enter the student's details.
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter exam marks (0 - 100): ";
    cin >> marks;

    // Check that the marks are within the valid range.
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks. Please enter a value from 0 to 100." << endl;
        return 0;
    }

    // Use an if-else ladder to decide the student's grade.
    if (marks >= 70) {
        grade = 'A';
    } else if (marks >= 60) {
        grade = 'B';
    } else if (marks >= 50) {
        grade = 'C';
    } else if (marks >= 40) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    // Display the student's details and grade.
    cout << "\n-------- Student Results --------" << endl;
    cout << "Student name: " << studentName << endl;
    cout << "Exam marks: " << marks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
