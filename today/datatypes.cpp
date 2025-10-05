#include <iostream>
using namespace std;
//display prime number bet the range given by user
bool isprime(int num){
	if(num<=1) return false;
	for(int i=2;i<num;i++){
		if(num%i == 0) return false;
	}
	return true;
}
int main()
{
	int s,e;
	cout <<"Enter start : "<< endl;
	cin>>s;
	cout <<"Enter end : "<< endl;
	cin>>e;
	
	for(int i=s;i<=e;i++)
	{
		if(isprime(i)){
			cout<<i<<" ";
		}
	}
	return 0;
}