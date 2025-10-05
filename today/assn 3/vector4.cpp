#include <iostream>
using namespace std;

class vector{
	int x,y,z;
	
	public:
		vector(int a=0, int b=0, int c=0){
			x=a;
			y=b;
			z=c;
		}
		
		vector add(vector v){
			vector result;
			result.x= x + v.x;
			result.y= y + v.y;
			result.z= z + v.z;
			
			return result;			
		}
		
		void display(){
			cout<<x<<" : "<<y<<" : "<<z<<endl;
		}
};
int main(){
	vector v1(2,3,4);
	vector v2(5,6,7);	
	
	v1.display();
	v2.display();
	
	vector v3 = v1.add(v2);
	v3.display();
	
	return 0;
}