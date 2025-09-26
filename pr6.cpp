//write a program to read n numbers and find average of it.
#include <iostream>
using namespace std;
int main(){
    int n;
<<<<<<< Updated upstream
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
=======
    for(int i = 0; i < n; i++){
        cin>>n;
    }
>>>>>>> Stashed changes
    return 0;
}