// WAP to find and display product of private data members of class num (no1, no2) through member
// functions.
#include <iostream>
using namespace std;
class Num {
    int no1;
    int no2;
public:
    void readData() {
        cout << "Enter first number: ";
        cin >> no1;
        cout << "Enter second number: ";
        cin >> no2;
    }
    void displayProduct() {
        int product = no1 * no2;
        cout << "Product of " << no1 << " and " << no2 << " is: " << product << endl;
    }
};
int main() {
    Num n;
    n.readData();
    n.displayProduct(); 
    return 0;
}

//output:
// Enter first number: 5
// Enter second number: 10
// Product of 5 and 10 is: 50
