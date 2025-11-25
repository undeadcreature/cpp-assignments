// WAP to create class Person (id, contact, age), read data for person and display it.
#include <iostream>
using namespace std;
class Person {
    int id;
    string contact;
    int age;
public:
    void readData() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Contact: ";
        cin >> contact;
        cout << "Enter Age: ";
        cin >> age;
    }
    void displayData() {
        cout << "ID: " << id << ", Contact: " << contact << ", Age: " << age << endl;
    }
};
int main() {
    Person p;
    p.readData();
    p.displayData();
    return 0;
}

//output:
// Enter ID: 101
// Enter Contact: 1234567890
// Enter Age: 25
// ID: 101, Contact: 1234567890, Age: 25    