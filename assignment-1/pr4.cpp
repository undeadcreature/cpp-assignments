//swap values and also swap without third variable
#include <iostream>
using namespace std;
int main(){
    int a=20;
    int b=30;

    a = a+b;
    b = a-b;
    a = a-b;

    cout<<a<<" "<<b<<endl;

    int tmp = a;
    a = b;
    b = tmp;

    cout<<a<<" "<<b<<endl;
    return 0;
}

//output:
//30 20
//20 30
