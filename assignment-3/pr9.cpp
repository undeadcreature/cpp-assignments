// WAP to swap the concept of multiple constructor or constructor overloading with class
// Faculty (int id, char * name, float salary). Initialize data members using various ways
// (i.e. default constructor, parameterized constructor, copy constructor) and also show
// the use of implicit and explicit method for object declaration.
#include <iostream>
#include <cstring>
using namespace std;
class Faculty {
    int id;
    char name[50];
    float salary;
public:
    // Default constructor
    Faculty() : id(0), salary(0.0) {
        strcpy(name, "Unknown");
    }
    // Parameterized constructor
    Faculty(int fid, const char* fname, float fsalary) : id(fid), salary(fsalary) {
        strcpy(name, fname);
    }
    // Copy constructor
    Faculty(const Faculty &f) : id(f.id), salary(f.salary) {
        strcpy(name, f.name);
    }
    void display() {
        cout << "Faculty ID: " << id << endl;
        cout << "Faculty Name: " << name << endl;
        cout << "Faculty Salary: $" << salary << endl;
    }
};
int main() {    
    // Using default constructor
    Faculty f1;
    cout << "Faculty 1 Details (Default Constructor):" << endl;
    f1.display();
    cout << endl;

    // Using parameterized constructor
    Faculty f2(101, "Dr. Smith", 75000.0);
    cout << "Faculty 2 Details (Parameterized Constructor):" << endl;
    f2.display();
    cout << endl;

    // Using copy constructor
    Faculty f3 = f2; // Implicit
    cout << "Faculty 3 Details (Copy Constructor - Implicit):" << endl;
    f3.display();
    cout << endl;

    Faculty f4(f2); // Explicit
    cout << "Faculty 4 Details (Copy Constructor - Explicit):" << endl;
    f4.display();
    cout << endl;

    return 0;
}
//output:
// Faculty 1 Details (Default Constructor):
// Faculty ID: 0
// Faculty Name: Unknown
// Faculty Salary: $0