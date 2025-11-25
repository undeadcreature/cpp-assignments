//largest value out of three
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers: "<<endl;
    cin>>a>>b>>c;
    int result = (a>b)&&(a>c)?a:(b>c)?b:c;
    cout<<"Largest number is: "<<result<<endl;
    return 0;
}
