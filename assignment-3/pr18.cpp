// WAP to create class DOB with data field day, month, year and show its use in class
// faculty having data fields name, DOB, salary along with the appropriate functions
// display the details of 5 faculties and also calculate their age.

#include <iostream>
using namespace std;
class DOB {
    int day;
    int month;
    int year;
public:
    DOB(int d, int m, int y) : day(d), month(m), year(y) {}
    void display() {
        cout << day << "/" << month << "/" << year;
    }
    int calculateAge(int currentYear) {
        return currentYear - year;
    }
};
class Faculty {
    string name;
    DOB dob;
    float salary;
public:
    Faculty(string n, DOB d, float s) : name(n), dob(d), salary(s) {}
    void display(int currentYear) {
        cout << "Name: " << name << ", DOB: ";
        dob.display();
        cout << ", Salary: " << salary;
        cout << ", Age: " << dob.calculateAge(currentYear) << " years" << endl;
    }
};
int main() {
    const int currentYear = 2024;
    Faculty faculties[5] = {
        Faculty("Alice", DOB(15, 6, 1980), 50000),
        Faculty("Bob", DOB(22, 9, 1975), 55000),
        Faculty("Charlie", DOB(5, 12, 1990), 48000),
        Faculty("David", DOB(30, 3, 1985), 52000),
        Faculty("Eve", DOB(10, 11, 1978), 60000)
    };
    for (int i = 0; i < 5; ++i) {
        faculties[i].display(currentYear);
    }
    return 0;
}
//output:
//Name: Alice, DOB: 15/6/1980, Salary: 50000, Age: 44 years
//Name: Bob, DOB: 22/9/1975, Salary: 55000, Age: 49 years
//Name: Charlie, DOB: 5/12/1990, Salary: 48000, Age: 34 years
//Name: David, DOB: 30/3/1985, Salary: 52000, Age: 39 years
//Name: Eve, DOB: 10/11/1978, Salary: 60000, Age: 46 years  
