// Construct the class named person (Data member: age, name), Write member functions:
// detail(), display(). Write a program that will accept the detail of four persons and create
// function such that it will find the max age from the supplied detail.
#include <iostream>
using namespace std;

class person{
	int age;
	string name;
	
	public:
		void getdetails(){
			cout<<"Enter name : ";
			cin>>name;
			cout<<"Enter age : ";
			cin>>age;
		}
		
		void display(){
			cout<<"Name is : "<<name<<"Age is : "<<age<<endl;
		}
		
		void maxage(){
			string old;
			int max=0;
			for(int i=0;i<4;i++){
			
				p1[i].getdetails();
		}
	}
			
		};
int main(){
	person p1[4];
	for(int i=0;i<4;i++){
		cout<<"Enter details of person : ";
		p1[i].getdetails();
	}
	
	cout<<"details of person : ";
	for(int i=0;i<4;i++){
		p1[i].display();
	}
}
//output:
// Enter details of person : Enter name : John
// Enter age : 28
// Enter details of person : Enter name : Alice
// Enter age : 34
// Enter details of person : Enter name : Bob
// Enter age : 23
// Enter details of person : Enter name : Diana
// Enter age : 31
// details of person : Name is : JohnAge is : 28
// Name is : AliceAge is : 34
// Name is : BobAge is : 23
// Name is : DianaAge is : 31
// The oldest person is Alice with age 34

