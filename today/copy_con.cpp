//WAP to initialize class with respective value for city,
// show use of copy constructor to initialize another object 
//of class city.
#include <iostream>
using namespace std;

class city{
	string name;
	int pin;
	
	public:
		city(string name, int pin){
			this->name = name;
			this->pin = pin;
		}
		
		city(const city &c){
			name = c.name;
			pin = c.pin;
		}
		
		void display(){
			cout<<"name is : "<<name<<" "<<"pin is : "<<pin<<endl;
		}
};

int main(){
	city c1("ahmedabad", 380001);
	c1.display();
	
	city copy1 = c1;
	copy1.display();
	
	city copy2(c1);
	copy2.display();
	
	return 0;
}