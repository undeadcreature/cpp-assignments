// WAP to show use of unary operators (++) and (–). Also perform addition and
// subtraction of value of data members n1 and n2 of an object of class ‘Num’ and
// display the result.
#include <iostream>
using namespace std;
class Num {
    int n1;
    int n2;
public:
    Num() : n1(0), n2(0) {}
    Num(int a, int b) : n1(a), n2(b) {}
    // Overloading unary ++ operator (prefix)
    Num& operator++() {
        ++n1;
        ++n2;
        return *this;
    }
    // Overloading unary -- operator (prefix)
    Num& operator--() {
        --n1;
        --n2;
        return *this;
    }
    // Overloading binary + operator
    Num operator+(const Num& obj) {
        return Num(n1 + obj.n1, n2 + obj.n2);
    }
    // Overloading binary - operator
    Num operator-(const Num& obj) {
        return Num(n1 - obj.n1, n2 - obj.n2);
    }
    void display() {
        cout << "n1: " << n1 << ", n2: " << n2 << endl;
    }
};
int main() {
    Num num1(5, 10);
    cout << "Original values: ";
    num1.display(); 
    ++num1;
    cout << "After increment: ";
    num1.display();
    --num1;
    cout << "After decrement: ";
    num1.display();
    Num num2(3, 4);
    Num num3 = num1 + num2;
    cout << "After addition: ";
    num3.display();
    Num num4 = num1 - num2;
    cout << "After subtraction: ";
    num4.display();
    return 0;
}
//output:
//Original values: n1: 5, n2: 10
//After increment: n1: 6, n2: 11
//After decrement: n1: 5, n2: 10
//After addition: n1: 8, n2: 14
//After subtraction: n1: 2, n2: 6

