//WAP to find and display the details of the oldest employee from both the employees using this pointer
#include <iostream>
using namespace std;

class emp{
	int age;
	string name;
	
	public:
		//parameterized constructor
		emp(int a, string n){
			age = a;
			name = n;
		}
		
		void findold(emp e2){
			if(this->age > e2.age ){
				cout<<"oldest is : "<<this->name<<" "<<this->age;
			}
			else{
				cout<<"oldest is : "<<e2.name<<" "<<e2.age;
			}
		}
		
};

int main(){
	emp e1(23, "mohan");
	emp e2(29, "abhay");
	
	e1.findold(e2);
	return 0;
}