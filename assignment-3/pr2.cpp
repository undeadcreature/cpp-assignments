//Write a program to convert the distance in meter to centimeter and feet to inches and vice versa using class DISTANCE.
//(1 meter = 100 centimeter and 1 feet = 12 inches). 
#include <iostream>
using namespace std;

class dist{
	float meter, cm;
	float feet, inches;	
	
	public:
		void metertocm(){
			cout<<"Enter meters : ";
			cin>>meter;
			cm = meter * 100;
			cout<<"distance in cm is : "<<cm<<endl;
		}
		
		void cmtometer(){
			cout<<"Enter cm : ";
			cin>>cm;
			meter = cm / 100;
			cout<<"distance in meter is : "<<meter<<endl;
		}
		
		
		void feettoinches(){
			cout<<"Enter feet : ";
			cin>>feet;
			inches = feet * 12;
			cout<<"distance in inches is : "<<inches<<endl;
		}
		void inchestofeet(){
            cout<<"Enter inches : ";
            cin>>inches;
            feet = inches / 12;
            cout<<"distance in feet is : "<<feet<<endl;
		}

};
int main(){
    dist d;
    d.metertocm();
    d.cmtometer();
    d.feettoinches();
    d.inchestofeet();
    
    return 0;
}
//output:
// Enter meters : 2
// distance in cm is : 200
// Enter cm : 150
// distance in meter is : 1.5
// Enter feet : 3
// distance in inches is : 36
// Enter inches : 48
// distance in feet is : 4  