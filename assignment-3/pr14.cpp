// WAP to create student having data members (rollno, name, stream) as base class.
// Derive class subject with marks of 5 subjects and apply respective functionality, also
// read the marks from class arts derived from class subject. Calculate final result and
// display details of each student from derived class. (multilevel inheritance)

#include <iostream>
#include <cstring>
using namespace std;
class Student {
protected:

    int rollno;
    char* name;
    char* stream;
public:
    Student() : rollno(0), name(nullptr), stream(nullptr) {}
    Student(int r, const char* n, const char* s) : rollno(r) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        stream = new char[strlen(s) + 1];
        strcpy(stream, s);
    }
    virtual void display() {    
        cout << "Roll No: " << rollno << ", Name: " << name << ", Stream: " << stream << endl;
    }
    virtual ~Student() {
        delete[] name;
        delete[] stream;
    }
};
class Subject : public Student {
protected:
    int marks[5];
public:
    Subject(int r, const char* n, const char* s, int m[]) : Student(r, n, s) {
        for (int i = 0; i < 5; ++i) {
            marks[i] = m[i];
        }
    }
    void display() override {
        Student::display();
        cout << "Marks: ";
        for (int i = 0; i < 5; ++i) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};
class Arts : public Subject {
public:
    Arts(int r, const char* n, const char* s, int m[]) : Subject(r, n, s, m) {}
    void display() override {
        Subject::display();
        int total = 0;
        for (int i = 0; i < 5; ++i) {
            total += marks[i];
        }
        cout << "Total Marks: " << total << endl;
    }
};
int main() {
    int marks1[5] = {85, 90, 78, 92, 88};
    Arts student1(1, "Alice", "Arts", marks1);
    student1.display(); 
    int marks2[5] = {75, 80, 68, 82, 78};
    Arts student2(2, "Bob", "Arts", marks2);
    student2.display();
    return 0;
}
//output:
//Roll No: 1, Name: Alice, Stream: Arts
//Marks: 85 90 78 92 88
//Total Marks: 433
//Roll No: 2, Name: Bob, Stream: Arts
//Marks: 75 80 68 82 78
//Total Marks: 383

