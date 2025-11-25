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
//output:
//Enter a number to print its multiplication table: 7
//Multiplication table of 7 is:
//7 x 1 = 7
//7 x 2 = 14
//7 x 3 = 21
//7 x 4 = 28
//7 x 5 = 35
//7 x 6 = 42
//7 x 7 = 49
//7 x 8 = 56
//7 x 9 = 63
//7 x 10 = 70