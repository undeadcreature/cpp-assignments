//find the square and cube of number from class num (int no) using inline function.
#include <iostream>
using namespace std;
class num{
	int no;
	
	public:
		inline int cube(int no){
			return no*no*no;
		}
		inline int square(int no){
			return no*no;
		}
};
int main(){
	num n1;
	cout<<n1.cube(3)<<endl;
	cout<<n1.square(2)<<endl;
	return 0;
}