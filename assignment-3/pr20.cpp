// WAP to create namespace having function for summation (total of values). Show its
// use in class ‘marks’ of students, display total marks of subjects using namespace.

#include <iostream>
using namespace std;
namespace marks_nmspc {
    int summation(int a, int b, int c, int d, int e) {
        return a + b + c + d + e;
    }
}
class Marks {
    int subject1;
    int subject2;
    int subject3;
    int subject4;
    int subject5;
public:
    Marks(int s1, int s2, int s3, int s4, int s5)
        : subject1(s1), subject2(s2), subject3(s3), subject4(s4), subject5(s5) {}
    void displayTotalMarks() {
        int total = marks_nmspc::summation(subject1, subject2, subject3, subject4, subject5);
        cout << "Total Marks: " << total << endl;
    }
};
int main() {
    Marks studentMarks(85, 90, 78, 92, 88);
    studentMarks.displayTotalMarks();
    return 0;
}
//output:
//Total Marks: 433