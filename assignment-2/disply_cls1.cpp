//WAP to create class Person (id, contact, age), read data for person and display it.
#include <iostream>
using namespace std;

class Person{
    int id;
    int contact;
    int age;
    public:
        void read_data(){
            cout<<"Enter id : ";
            cin>>id;
            cout<<"Enter contact : ";
            cin>>contact;
            cout<<"Enter age : ";
            cin>>age;

        }
        void display(){
            cout<<"id : "<<id<<endl;
            cout<<"contact : "<<contact<<endl;
            cout<<"age : "<<age<<endl;
        }
};
int main()
{
    Person p1;
    p1.read_data();
    cout<<"Displaying data : "<<endl;
    p1.display();
    return 0;
}