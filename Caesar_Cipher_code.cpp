#include <iostream>
#include <string>
using namespace std;

void printHeader() {
    cout << "*******************************************\n";
    cout << "*                                         *\n";
    cout << "*     Welcome to the Password Shifter!    *\n";
    cout << "*                                         *\n";
    cout << "*******************************************\n";
}

void printFooter(string shiftedPassword) {
    cout << "\n*******************************************\n";
    cout << "*                                         *\n";
    cout << "*     The Shifted Password is:            *\n";
    cout << "*            " << shiftedPassword << "                     *\n";  // Display the shifted password
    cout << "*                                         *\n";
    cout << "*******************************************\n";
}

string shiftPassword(string password, int shift) {
    string shiftedPassword = "";
    for (int i = 0; i < password.length(); i++) {
        char shiftedChar = password[i] + shift;
        shiftedPassword += shiftedChar;
    }
    return shiftedPassword;
}

int main() {
    string password;
    int shift;

    printHeader();

    cout << "Enter the password: ";
    cin >> password;

    cout << "Enter the shift value (number): ";
    cin >> shift;

    string shiftedPassword = shiftPassword(password, shift);

    cout << "\nOriginal Password: " << password << endl;

    printFooter(shiftedPassword);  // Pass the shifted password to the footer

    return 0;
}
