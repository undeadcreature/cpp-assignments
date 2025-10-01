//operator overloading
/*Create a class string with character array as a data member and write a program to add two
strings with use of operator overloading concept.*/

#include <iostream>
#include <string.h>
using namespace std;

class addstr{

	public:
		char str[100];
		addstr(){}
		addstr(char str[]){
			strcpy(this->str, str);
		}
			
		addstr operator+ (addstr &s2){
			addstr s3;
			strcat(this->str, s2.str);
            strcpy(s3.str, this->str);
			return s3;
		}
};

int main(){
	char str1[] = "this is ";
	char str2[] = "the way";
	
	addstr a1(str1);
	addstr a2(str2);
	addstr a3;	
	
	a3 = a1 + a2;
	//overload function we arew using here
	
	cout<<"concatnate of two string is : "<<a3.str<<endl;
    return 0;
}
