//WAP to find out and display factorial of the given number.
#include <iostream>
using namespace std;
int main() {
    int number;
    unsigned long long factorial = 1; 

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= number; ++i) {
            factorial *= i; 
        }
        cout << "Factorial of " << number << " = " << factorial << endl;
    }

    return 0;
}
//output:
//Enter a positive integer: 5
//Factorial of 5 = 120