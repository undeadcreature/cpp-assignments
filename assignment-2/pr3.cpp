// WAP to design class student (rollno, marks). Read data for five students and display them in proper
// // format with calculating percentage if total marks of 5 subjects are calculated from 250.
#include <iostream>
using namespace std;
class Student {
    int rollno;
    int marks[5];
public:
    void readData() {
        cout << "Enter Roll Number: ";
        cin >> rollno;
        cout << "Enter marks for 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }
    void displayData() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        double percentage = (total / 250.0) * 100;
        cout << "Roll Number: " << rollno << ", Total Marks: " << total << ", Percentage: " << percentage << "%" << endl;
    }
};
int main() {
    const int numStudents = 5;
    Student students[numStudents];
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter details for student " << (i + 1) << ":\n";
        students[i].readData();
    }
    cout << "\nStudent Details:\n";
    for (int i = 0; i < numStudents; i++) {
        students[i].displayData();
    }
    return 0;
}

//output:
// Enter details for student 1: 
// Enter Roll Number: 101
// Enter marks for 5 subjects: 45 50 40 48 47
// Enter details for student 2:

// Enter Roll Number: 102
// Enter marks for 5 subjects: 40 42 38 44 41
// Enter details for student 3:
// Enter Roll Number: 103
// Enter marks for 5 subjects: 50 49 48 50 50
// Enter details for student 4:
// Enter Roll Number: 104
// Enter marks for 5 subjects: 35 40 38 42 37
// Enter details for student 5:
// Enter Roll Number: 105
// Enter marks for 5 subjects: 48 47 49 46 45
// Student Details:
// Roll Number: 101, Total Marks: 230, Percentage: 92%
// Roll Number: 102, Total Marks: 205, Percentage: 82%

// Roll Number: 103, Total Marks: 247, Percentage: 98.8%
// Roll Number: 104, Total Marks: 192, Percentage: 76.8
// Roll Number: 105, Total Marks: 235, Percentage: 94%
