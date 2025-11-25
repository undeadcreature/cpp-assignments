//WAP to create arithmetic calculator using if…else if…else and switch…case type of control
// statements.
#include <iostream>
using namespace std;
int main() {
    char operation;
    double num1, num2, result;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    // Using if...else if...else
    if (operation == '+') {
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result << endl;
    } else if (operation == '-') {
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result << endl;
    } else if (operation == '*') {
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result << endl;
    } else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            cout << num1 << " / " << num2 << " = " << result << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    } else {
        cout << "Error: Invalid operator!" << endl;
    }

    // Using switch...case
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "[Switch] " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "[Switch] " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "[Switch] " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "[Switch] " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "[Switch] Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "[Switch] Error: Invalid operator!" << endl;
            break;
    }

    return 0;
}
//output:
// Enter an operator (+, -, *, /): *
// Enter two operands: 5 3
// 5 * 3 = 15
// [Switch] 5 * 3 = 15
