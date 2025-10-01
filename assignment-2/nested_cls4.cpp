// WAP to show use of nested classes student (int id, char grade) and subject (sub1, sub2, sub3). Also
// after reading values for the same, calculate result of student and display it in proper format.
#include <iostream>
using namespace std;

class student{
    int id;
    char grade;
    class subject{
        int sub1, sub2, sub3;
        public:
            void read_data(){
                cout<<"Enter marks for subject 1 : ";
                cin>>sub1;
                cout<<"Enter marks for subject 2 : ";
                cin>>sub2;
                cout<<"Enter marks for subject 3 : ";
                cin>>sub3;
            }
            int total_marks(){
                return sub1 + sub2 + sub3;
            }
    }s;

    public:
        void read_data(){
            cout<<"Enter student id : ";
            cin>>id;
            cout<<"Enter student grade : ";
            cin>>grade;
            s.read_data();
        }
        void display(){
            cout<<"Student id : "<<id<<endl;
            cout<<"Student grade : "<<grade<<endl;
            cout<<"Total marks : "<<s.total_marks()<<endl;
            cout<<"Percentage : "<<(s.total_marks()/3.0)<<endl;
        }
};

int main(){
    student s;
    s.read_data();
    s.display();
    return 0;
}