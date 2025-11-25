// WAP to show the total number of objects created in single execution of program. (using static data
// member and static member function).
#include <iostream>
using namespace std;
class ObjectCounter {
    static int objectCount; // Static data member to keep track of object count
public:
    // Constructor increments the object count each time an object is created
    ObjectCounter() {
        objectCount++;
    }
    static int getObjectCount() {
        return objectCount;
    }
};
int ObjectCounter::objectCount = 0;

int main() {
    ObjectCounter obj1;
    ObjectCounter obj2;
    ObjectCounter obj3;

    cout << "Total objects created: " << ObjectCounter::getObjectCount() << endl;

    return 0;
}   
//output:
// Total objects created: 3
