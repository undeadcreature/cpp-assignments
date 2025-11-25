// WAP to create namespace out_nmspc to have class counter (int a, int b). Show the use
// counters in another class by including/using already created namespace.

#include <iostream>
using namespace std;
namespace out_nmspc {
    class Counter {
        int a;
        int b;
    public:
        Counter(int x, int y) : a(x), b(y) {}
        void display() {
            cout << "Counter values: a = " << a << ", b = " << b << endl;
        }
        int sum() {
            return a + b;
        }
    };
}
class UseCounter {
    out_nmspc::Counter counterObj;
public:
    UseCounter(int x, int y) : counterObj(x, y) {}
    void show() {
        counterObj.display();
        cout << "Sum of a and b: " << counterObj.sum() << endl;
    }
};
int main() {
    UseCounter uc(5, 10);
    uc.show();
    return 0;
}
//output:
//Counter values: a = 5, b = 10
//Sum of a and b: 15    