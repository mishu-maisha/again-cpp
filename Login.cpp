#include <iostream>
#include <string>
using namespace std;

int main() {
    //string correctUsername = "admin";
    string correctUsername;
    cout<<"Set your username :"<<endl;;
    getline(cin, correctUsername);

    //string correctPassword = "1234";
    string correctPassword;
    cout<<"Set password : "<<endl;
    getline(cin, correctPassword);

    string username, password;
    int attempts = 0;

    while (attempts < 3) {
        cout << "Enter username: ";
        getline(cin, username);

        // Skip if username input is empty
        if (username.empty()) {
            cout << "Username cannot be empty. Try again.\n";
            continue;
        }

        cout << "Enter password: ";
        getline(cin, password);

        // Skip if password input is empty
        if (password.empty()) {
            cout << "Password cannot be empty. Try again.\n";
            continue;
        }

        if (username == correctUsername && password == correctPassword) {
            cout << "Login successful!\n";
            break;  // Exit loop on successful login
        } else {
            cout << "Invalid credentials.\n";
            attempts++;
        }
    }

    if (attempts == 3) {
        cout << "Too many failed attempts. Access denied.\n";
    }

    return 0;
}
