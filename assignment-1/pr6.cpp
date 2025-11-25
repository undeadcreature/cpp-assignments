//write a program to read n numbers and find average of it.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter how many numbers you want to enter: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" numbers: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"Average is: "<<(float)sum/n;
    return 0;
}
//output:
//Enter how many numbers you want to enter: 4
//Enter 4 numbers: 5 10 15 20
//Average is: 12.5