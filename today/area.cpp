//design class shape (int height, int width, int length) to find out the area of square, rectangle,
// triangle and circle using concept of function overloading
#include <iostream>
using namespace std;
class shape{
	int height;
	int width;
	int length;
	
	public:
		float area(int side){//area of square
			return side*side;
		}	
		float area(int length, int width){//area of rectangle
			return length*width;
		}
		float area(float base, float height){//area of triangle
			return 0.5*base*height;
		}
		float area(double radius){//area of circle
			return 3.14* radius*radius;
		}
			
};

int main(){
	shape s;
	cout<<s.area(30)<<endl;
	cout<<s.area(2,3)<<endl;
	cout<<s.area(300,20)<<endl;
	cout<<s.area(200)<<endl;
	
	
	return 0;
}
