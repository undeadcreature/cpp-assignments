// WAP to create calculator that performs all basic arithmetic operations and display the result.
#include <iostream>
using namespace std;
int main() {
    char operation;
    double num1, num2, result;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
    }

    return 0;
}
//output:
//Enter an operator (+, -, *, /): +
//Enter two operands: 5 3
//5 + 3 = 8
//Enter an operator (+, -, *, /): -
//Enter two operands: 10 4
//10 - 4 = 6
//Enter an operator (+, -, *, /): *
//Enter two operands: 7 6
//7 * 6 = 42
//Enter an operator (+, -, *, /): /
//Enter two operands: 8 2
//8 / 2 = 4
//Enter an operator (+, -, *, /): /
//Enter two operands: 5 0
//Error: Division by zero is not allowed.
//Enter an operator (+, -, *, /): ^
//Enter two operands: 3 4
//Invalid operator!