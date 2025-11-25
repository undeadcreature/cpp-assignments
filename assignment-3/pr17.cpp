// Write a program to create ‘income’ having data members like emp_code and salary.
// Show the concept of “This pointer”, pointer to find out whose income was higher
// among 3 employees.

#include <iostream>
using namespace std;
class Income {
    int emp_code;
    float salary;
public:
    Income(int code, float sal) : emp_code(code), salary(sal) {}
    void display() {
        cout << "Employee Code: " << emp_code << ", Salary: " << salary << endl;
    }
    bool isHigherThan(Income* other) {
        return this->salary > other->salary;
    }
};
int main() {
    Income emp1(101, 50000.0);
    Income emp2(102, 60000.0);
    Income emp3(103, 55000.0);  
    Income* highest = &emp1;
    if (emp2.isHigherThan(highest)) {
        highest = &emp2;
    }
    if (emp3.isHigherThan(highest)) {
        highest = &emp3;
    }
    cout << "Employee with highest income:" << endl;
    highest->display();
    return 0;
}
//output:
//Employee with highest income:
//Employee Code: 102, Salary: 60000