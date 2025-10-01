// WAP to design class student (rollno, marks). Read data for five students and display them in proper
// format with calculating percentage if total marks of 5 subjects are calculated from 250.
#include <iostream>
using namespace std;

class student{
        int rollno;
        int marks[5];
        float perc;

        public:
            void read_data(){
                cout<<"Enter rollno of student : ";
                cin>>rollno;
                for(int i=0;i<5;i++){
                    cout<<"ENter marks of sub "<<i+1<<" : ";
                    cin>>marks[i];
                }
            }

            void display(){
                cout<<"rollno of student : "<<rollno<<endl;
                cout<<"--marks--";
                for(int i=0;i<5;i++){
                    cout<<"marks of sub "<<i+1<<" : ";
                    cout<<marks[i];
                }
                cout<<endl;
                cout<<"percentage is : "<<perc<<endl;

            }
            void calc(){
                int total=0;
                for(int i=0;i<5;i++){
                    total += marks[i];
                }
                perc = (total/250)*100;
            }
};

int main(){
    student s[5];
    for(int i=0;i<5;i++){
        cout<<"Enter details for stu "<<i+1<<" : ";
        s[i].read_data();
        s[i].calc();
    }
    cout<<"displaying student details : ";
    for(int i=0;i<5;i++){
        cout<<"stu "<<i+1<<" : ";
        s[i].display();
    }

    return 0;
}