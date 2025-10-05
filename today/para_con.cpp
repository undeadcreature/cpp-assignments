//WAP to read data from user for x and y coordinates and swap it using member function for class axis 
//(int x, int y). Show use of parameterized constructor.
#include <iostream>

using namespace std;

class axis{
	int x,y;
	
	public:
		axis(int x, int y){
			this->x = x;
			this->y = y;
		}
		
		void swap(){
			int tmp = x;
			x=y;
			y=tmp;
		}
		
		void display(){
			cout<<"x is : "<<x<<endl;
			cout<<"y is : "<<y<<endl;	
		}
};
int main()
{
	axis a1(3,4);
	cout<<"before swapping :"<<endl;
	a1.display();
	
	a1.swap();
	cout<<"after  swapping :"<<endl;
	a1.display();
	
	return 0;
}