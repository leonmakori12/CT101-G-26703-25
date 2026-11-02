// Program to manage library book records using a class and object.
// It allows the user to enter book details, borrow a book,
// and display the updated book information.

#include <iostream>
#include <string>
using namespace std;

// Create a Book class
class Book
{
    private:
        string title;
        string author;
        int copies;

    public:

        // Function to input book details
        void inputDetails()
        {
            cout << "Enter book title: ";
            getline(cin, title);

            cout << "Enter author name: ";
            getline(cin, author);

            cout << "Enter number of available copies: ";
            cin >> copies;
        }

        // Function to borrow a book
        void borrowBook()
        {
            if (copies > 0)
            {
                copies--;
                cout << "\nBook borrowed successfully!" << endl;
            }
            else
            {
                cout << "\nNo copies available for borrowing." << endl;
            }
        }

        // Function to display book details
        void displayDetails()
        {
            cout << "\nBook Details" << endl;
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Available copies: " << copies << endl;
        }
};

int main()
{
    // Create an object of the Book class
    Book myBook;

    // Input book information
    myBook.inputDetails();

    // Borrow a book
    myBook.borrowBook();

    // Display updated book details
    myBook.displayDetails();

    return 0;
}