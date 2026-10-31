//program for driving test result evaluation
//It takes theory and practical marks and calculates average to decide pass/fail

#include <iostream>
using namespace std;

int main(){
	//Declare variables to store student information
	string studentName;
	double theoryMarks;
	double practicalMarks;
	double average;
	
	
	//Ask the user to emter the student name
	cout<< "Enter student name: ";
	cin>> studentName;
	
	//Ask the user to enter theory marks
	cout<< "Enter theory marks: ";
	cin>> theoryMarks;
	
	//Ask the user to enter practical marks
	cout<< "Enter practical marks: ";
	cin>> practicalMarks;
	
	
	//Calculate the average score 
	average = (theoryMarks + practicalMarks)/2;
 
    //Display the student's results
    cout << "===============DRIVIND TEST RESULTS==============="<< endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Theory Marks: " <<theoryMarks << endl;
    cout << "Practical Marks: " <<practicalMarks<< endl;
    cout << "Average Marks: " <<average<< endl;
    
    //Check whether the student has passed or failed
    if  (average >= 50)
	{
		cout << "Result: Passed" << endl;
	}
	else
	{
		cout << "Result: Failed" <<endl;
	}
	return 0;
}
