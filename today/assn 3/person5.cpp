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
