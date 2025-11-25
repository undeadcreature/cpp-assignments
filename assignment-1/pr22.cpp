// WAP to read the three different single digits between 1 and 9. Display the smallest and
// largest three digits number using the read single digits.
#include <iostream>
using namespace std;
int main() {
    int digit1, digit2, digit3;

    cout << "Enter three different single digits (between 1 and 9): ";
    cin >> digit1 >> digit2 >> digit3;

    // Validate input
    if (digit1 < 1 || digit1 > 9 || digit2 < 1 || digit2 > 9 || digit3 < 1 || digit3 > 9 ||
        digit1 == digit2 || digit1 == digit3 || digit2 == digit3) {
        cout << "Invalid input! Please enter three different single digits between 1 and 9." << endl;
        return 1;
    }

    // Find smallest and largest digits
    int smallest = min(digit1, min(digit2, digit3));
    int largest = max(digit1, max(digit2, digit3));

    // Find the middle digit
    int middle = digit1 + digit2 + digit3 - smallest - largest;

    // Form the smallest and largest numbers
    int smallestNumber = smallest * 100 + middle * 10 + largest;
    int largestNumber = largest * 100 + middle * 10 + smallest;

    cout << "Smallest number: " << smallestNumber << endl;
    cout << "Largest number: " << largestNumber << endl;

    return 0;
}
//output:
//Enter three different single digits (between 1 and 9): 3 1    
//Smallest number: 123
//Largest number: 321
//Enter three different single digits (between 1 and 9): 7 5
//Smallest number: 567
//Largest number: 765
//Enter three different single digits (between 1 and 9): 9 2
//Smallest number: 299
//Largest number: 992