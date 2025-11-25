// WAP to find and display the details of the oldest employee from both the employees using this
// pointer.
#include <iostream>
using namespace std;
class Employee {
    int id;
    string name;
    int age;
public:
    void readData() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee Age: ";
        cin >> age;
    }
    void displayData() {
        cout << "Employee ID: " << id << ", Name: " << name << ",Age: " << age << endl;
    }
    bool isOlderThan(Employee* other) {
        return this->age > other->age;
    }
};
int main() {
    Employee emp1, emp2;
    cout << "Enter details for Employee 1:\n";
    emp1.readData();
    cout << "Enter details for Employee 2:\n";
    emp2.readData();

    cout << "\nEmployee Details:\n";
    emp1.displayData();
    emp2.displayData();
    if (emp1.isOlderThan(&emp2)) {
        cout << "\nThe oldest employee is:\n";
        emp1.displayData();
    } else if (emp2.isOlderThan(&emp1)) {
        cout << "\nThe oldest employee is:\n";
        emp2.displayData();
    } else {
        cout << "\nBoth employees are of the same age.\n";
    }
    return 0;
}
//output:
// Enter details for Employee 1:
// Enter Employee ID: 101
// Enter Employee Name: Alice   
// Enter Employee Age: 30
// Enter details for Employee 2:
// Enter Employee ID: 102
// Enter Employee Name: Bob
// Enter Employee Age: 35
// Employee Details:
// Employee ID: 101, Name: Alice,Age: 30
// Employee ID: 102, Name: Bob,Age: 35
// The oldest employee is:
// Employee ID: 102, Name: Bob,Age: 35