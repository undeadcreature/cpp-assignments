// WAP to show use of nested classes student (int id, char grade) and subject (sub1, sub2, sub3). Also
// after reading values for the same, calculate result of student and display it in proper format.
#include <iostream>
using namespace std;
class Student {
    int id;
    char grade;
    
    class Subject {
        int sub1;
        int sub2;
        int sub3;
    public:
        void readSubjects() {
            cout << "Enter marks for Subject 1: ";
            cin >> sub1;
            cout << "Enter marks for Subject 2: ";
            cin >> sub2;
            cout << "Enter marks for Subject 3: ";
            cin >> sub3;
        }
        
        int calculateTotal() {
            return sub1 + sub2 + sub3;
        }
    };
    
    Subject subjects;   
public:
    void readData() {
        cout << "Enter Student ID: ";
        cin >> id;
        cout << "Enter Student Grade: ";
        cin >> grade;
        subjects.readSubjects();
    }
    void displayData() {
        int total = subjects.calculateTotal();
        cout << "Student ID: " << id << ", Grade: " << grade << ", Total Marks: " << total << endl;
    }
};
int main() {
    Student s;
    s.readData();
    s.displayData();
    return 0;
}

//output:
// Enter Student ID: 201
// Enter Student Grade: A
// Enter marks for Subject 1: 85
// Enter marks for Subject 2: 90
// Enter marks for Subject 3: 88
// Student ID: 201, Grade: A, Total Marks: 263
