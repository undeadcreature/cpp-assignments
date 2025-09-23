//write a prog to add five numbers using while and for loop
#include <iostream>
using namespace std;
int main(){
    int num[5];
    cout<<"Enter five numbers :";
    for(int i=0;i<5;i++){
        cin>>num[i];
    }
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=num[i];
    }
    cout<<"sum using for loop is : "<<sum<<endl;

    

}