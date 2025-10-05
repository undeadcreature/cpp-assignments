//add two objects of class time (hours, Mins, sec) and display new time in proper format, 
//using member function, Also perform addition of time type object using friend function
#include <iostream>
using namespace std;

class time{
	int hr, min, sec;
	
	public:
		time(){
			hr=0;
			min=0;
			sec=0;
		}
		//parameterized
		time(int h, int m, int s){
			hr = h;
			min = m;
			sec = s;
			
		}
		time add(time t2){
			time t3;
			t3.sec = sec+t2.sec;
			t3.min = min+t2.min;
			t3.hr = hr+t2.hr;
			
			t3.sec = t3.sec % 60;
			t3.min = t3.min % 60;
			
			return t3;
		}
		
		void display(){
			cout << hr << "h " << min << "m " << sec << "s" << endl;
		}
		
		//friend fun to add
		friend time addfrn(time t1, time t2);
		
};

time addfrn(time t1, time t2){
	time t3;
	t3.sec = t1.sec+t2.sec;
	t3.min = t1.min+t2.min;
	t3.hr = t1.hr+t2.hr;
			
	t3.sec = t3.sec % 60;
	t3.min = t3.min % 60;
			
	return t3;
}

int main(){
	time t1(2,12,00);
	time t2(3,24,23);
	
	t1.display();
	t2.display();
	
	
	time r1 = t1.add(t2);
    cout << "Member function result: ";
    r1.display();
    
    // Using friend function
    time r2 = addfrn(t1,t2);
    cout << "Friend function result: ";
    r2.display();
    
	return 0;
}