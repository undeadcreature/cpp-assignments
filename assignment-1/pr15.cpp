// WAP to compute the total resistance for any number of parallel resistors.
// Using the same algorithm find out the total resistance of a network of two resistors with the
// values 400 W and 200 W.(note: 1/R = 1/R1 + 1/R2 + ... + 1/Rn)
#include <iostream>
using namespace std;
int main() {
    int n;
    double resistance, totalResistanceInverse = 0.0;

    cout << "Enter the number of resistors in parallel: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cout << "Enter resistance of resistor " << i << " (in ohms): ";
        cin >> resistance;
        if (resistance <= 0) {
            cout << "Resistance must be a positive value." << endl;
            return 1;
        }
        totalResistanceInverse += 1.0 / resistance;
    }

    if (totalResistanceInverse == 0) {
        cout << "Total resistance is infinite (no resistors)." << endl;
    } else {
        double totalResistance = 1.0 / totalResistanceInverse;
        cout << "Total resistance of the parallel resistors is: " << totalResistance << " ohms" << endl;
    }

    return 0;
}