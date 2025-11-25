// Write a menu-driven program to convert given decimal number into equivalent binary, octal
// and hexadecimal values.
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int choice;
    int decimalNumber;

    cout << "Decimal to Other Base Converter Menu:" << endl;
    cout << "1. Decimal to Binary" << endl;
    cout << "2. Decimal to Octal" << endl;
    cout << "3. Decimal to Hexadecimal" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    switch (choice) {
        case 1: {
            // Decimal to Binary
            cout << "Binary equivalent of " << decimalNumber << " is: ";
            if (decimalNumber == 0) {
                cout << "0";
            } else {
                int binary[32];
                int index = 0;
                int num = decimalNumber;
                while (num > 0) {
                    binary[index++] = num % 2;
                    num /= 2;
                }
                for (int i = index - 1; i >= 0; i--) {
                    cout << binary[i];
                }
            }
            cout << endl;
            break;
        }
        case 2:
            // Decimal to Octal
            cout << "Octal equivalent of " << decimalNumber << " is: "
                 << oct << decimalNumber << endl;
            break;
        case 3:
            // Decimal to Hexadecimal
            cout << "Hexadecimal equivalent of " << decimalNumber << " is: "
                 << hex << uppercase << decimalNumber << endl;
            break;
        default:
            cout << "Invalid choice! Please select a valid option." << endl;
            break;
    }

    return 0;
}
//output:
//Decimal to Other Base Converter Menu:
//1. Decimal to Binary
//2. Decimal to Octal   
//3. Decimal to Hexadecimal
//Enter your choice (1-3): 1
//Enter a decimal number: 45
//Binary equivalent of 45 is: 101101