#include <iostream>
using namespace std;
int main() {
    cout << "Size of char: " << sizeof(char) << " byte(s)" << endl;
    cout << "Size of short: " << sizeof(short) << " byte(s)" << endl;
    cout << "Size of int: " << sizeof(int) << " byte(s)" << endl;
    cout << "Size of long: " << sizeof(long) << " byte(s)" << endl;
    cout << "Size of long long: " << sizeof(long long) << " byte(s)" << endl;
    cout << "Size of float: " << sizeof(float) << " byte(s)" << endl;
    cout << "Size of double: " << sizeof(double) << " byte(s)" << endl;
    cout << "Size of long double: " << sizeof(long double) << " byte(s)" << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte(s)" << endl;
    return 0;
}
//output:
//Size of char: 1 byte(s)
//Size of short: 2 byte(s)
//Size of int: 4 byte(s)
//Size of long: 8 byte(s)
//Size of long long: 8 byte(s)
//Size of float: 4 byte(s)
//Size of double: 8 byte(s)
//Size of long double: 16 byte(s)
//Size of bool: 1 byte(s)