//write a prog to add five numbers using while and for loop
#include <iostream>
using namespace std;
int main(){
    int num[5];
    cout<<"Enter five numbers :";
    for(int i=0;i<5;i++){
        cin>>num[i];
    }
//--------------------------------------------
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=num[i];
    }
    cout<<"sum using for loop is : "<<sum<<endl;
//---------------------------------------------
    int sum2=0;
    int i=0;
    while(i<5){
        sum2+=num[i];
        i++;
    }
    cout<<"sum using while loop is : "<<sum2<<endl;
    return 0;

}
//output:
//Enter five numbers :1 2 3 4 5
//sum using for loop is : 15
//sum using while loop is : 15
