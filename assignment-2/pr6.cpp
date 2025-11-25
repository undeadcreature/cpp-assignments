// WAP to find the square and cube of number from class num (int no) using inline function.
#include <iostream>
using namespace std;
class Num {
    int no;
public:
    inline void readData() {
        cout << "Enter a number: ";
        cin >> no;
    }
    inline int square() {
        return no * no;
    }
    inline int cube() {
        return no * no * no;
    }
};
int main() {
    Num n;
    n.readData();
    cout << "Square of the number: " << n.square() << endl;
    cout << "Cube of the number: " << n.cube() << endl;
    return 0;
}
//output:
// Enter a number: 3
// Square of the number: 9
// Cube of the number: 27