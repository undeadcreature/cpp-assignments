#include <iostream>

using namespace std;
int main(){
    int n;
    int pc = 0;
    int nc = 0;

    cout<<"Enter numbers (0 to stop): "<<endl;

    while(true){
        cin>>n;
        if(n==0)
            break;
        if(n>0)
            pc++;
        else
            nc++;
    }
    cout << "result : "<<endl;
    cout << "Positive numbers entered: " << pc <<endl;
    cout << "Negative numbers entered: " << nc <<endl;

    return 0;
}
//output:
//Enter numbers (0 to stop):
//5
//-3
//8
//-1
//0
//result :
//Positive numbers entered: 2
//Negative numbers entered: 2