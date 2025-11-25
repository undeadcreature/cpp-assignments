
//write a program to add 8% tax to a given amount and round a net amount to its positive nearest amount without using any inbuilt function.
#include <iostream>
using namespace std;
int main(){
    float amount;
    cout<<"Enter amount: "<<endl;//taking input
    cin>>amount;
    float net_amount = amount + (amount*0.08);//calculating net amount
    int rounded_amount = (int)(net_amount + 0.5);//rounding off to nearest integer
    cout<<"Net amount after tax: "<<net_amount<<endl;
    cout<<"Rounded amount: "<<rounded_amount<<endl;
    return 0;
}
//output:
//Enter amount:
//100
//Net amount after tax: 108
//Rounded amount: 108
