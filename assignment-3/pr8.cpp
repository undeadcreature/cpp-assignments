// WAP to show the functionality of copy constructor with class swap(int x, int y) after
// swapping values of data members of an object which would be passed as an object for
// initialization of an another object.
#include <iostream>
using namespace std;
class Swap {
    int a, b;
public:
    // Parameterized constructor
    Swap(int x, int y) : a(x), b(y) {}  
    // Copy constructor
    Swap(const Swap &s) : a(s.a), b(s.b) {}  
    void performSwap() {
        int temp = a;
        a = b;
        b = temp;
    }
    void display() {
        cout << "a: " << a << ", b: " << b << endl;
    }
};
int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;  
    Swap obj1(x, y);
    cout << "Before swapping:" << endl;
    obj1.display();
    obj1.performSwap();
    cout << "After swapping:" << endl;
    obj1.display();
    Swap obj2 = obj1;  // Using copy constructor
    cout << "Copied object:" << endl;
    obj2.display();
    return 0;
}
//output:
// Enter two integers: 5 10
// Before swapping:
// a: 5, b: 10
// After swapping:
// a: 10, b: 5
// Copied object:
// a: 10, b: 5  