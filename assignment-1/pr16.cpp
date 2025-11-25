//WAP to print out the multiplication table of any number user enters.
#include <iostream>
using namespace std;
int main() {
    int number;

    cout << "Enter a number to print its multiplication table: ";
    cin >> number;

    cout << "Multiplication table of " << number << " is:" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}