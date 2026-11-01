// Program to verify a user's username and password
// using a do-while loop until correct credentials are entered.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string correctUsername = "Leonmakori";
    string correctPassword = "13069";

    string username, password;

    // Repeat until the correct login details are entered
    do
    {
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        // Check entered credentials
        if (username == correctUsername &&
            password == correctPassword)
        {
            cout << "Access Granted" << endl;
        }
        else
        {
            cout << "Incorrect credentials, try again" << endl;
        }

    } while (username != correctUsername ||
             password != correctPassword);

    return 0;
}