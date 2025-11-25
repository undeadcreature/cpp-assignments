// //WAP that converts numbers to words.
// Eg: number 569 results in ''five six nine”.
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number == 0) {
        cout << "zero" << endl;
        return 0;
    }

    // Handle negative numbers
    if (number < 0) {
        cout << "minus ";
        number = -number;
    }

    // Store digits in reverse order
    string words = "";
    while (number > 0) {
        int digit = number % 10;
        switch (digit) {
            case 0: words = "zero " + words; break;
            case 1: words = "one " + words; break;
            case 2: words = "two " + words; break;
            case 3: words = "three " + words; break;
            case 4: words = "four " + words; break;
            case 5: words = "five " + words; break;
            case 6: words = "six " + words; break;
            case 7: words = "seven " + words; break;
            case 8: words = "eight " + words; break;
            case 9: words = "nine " + words; break;
        }
        number /= 10;
    }

    cout << words << endl;

    return 0;
}

//output:
//Enter a number: 569
//five six nine
//Enter a number: -204
//minus two zero four
//Enter a number: 0
//zero