
#include <iostream>
#include <string>
using namespace std;
int main() {
    string username, password;
    char choice;
    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;
    cout << "\nPassword: ";
    for (int i = 0; i < password.length(); i++) {
        cout << '*';
    }
    cout << "\nDo you want to unhide password? (y/n): ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        cout << "Password: " << password << endl;
    } else {
        cout << "Password remains hidden." << endl;
    }
    if (username == "saurabh" && password == "12345") {
        cout << "Login Successful!" << endl;
    } else {
        cout << "Invalid Username or Password!" << endl;
    }
    return 0; }
