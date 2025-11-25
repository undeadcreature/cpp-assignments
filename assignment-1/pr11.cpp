//WAP to display all prime numbers between the ranges of numbers given by user.
#include <iostream>
using namespace std;
int main() {
    int lower, upper;
    cout << "Enter lower and upper range: ";
    cin >> lower >> upper;

    cout << "Prime numbers between " << lower << " and " << upper << " are: " << endl;

    for (int num = lower; num <= upper; num++) {
        if (num < 2) continue; // Skip numbers less than 2

        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    return 0;
}