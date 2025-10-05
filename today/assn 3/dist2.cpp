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
			
			
		}
		void inchestofeet(){
		}
};