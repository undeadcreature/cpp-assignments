//show the total number of objects created in single execution of program. 
//(using static data member and static member function).

#include <iostream>
using namespace std;
class A{
	static int n;
	
	public:
		A(){
			n++;
		}
		~A(){
			n--;
		}
		
		static int getob(){
			return n;
		}
};

int A::n = 0;

int main(){
	A ob1;
	A ob2;
	A ob3;
	cout<<ob3.getob()<<endl;
	return 0;
}
