//write fibonacci series take a value n from user
#include <iostream>
using namespace std;

void fibonacci(int n) {
    int t1=0, t2=1;
    if(n<=0) {
        cout<<"Enter a positive integer"<<endl;
        return;
    }
    cout << "Fibonacci series up to " << n << " terms: ";
    
    for(int i=0; i<n; i++){
        cout << t1;
        if (i != n - 1) cout << ", ";
        int next = t1 + t2;
        t1 = t2;
        t2 = next;
    }

    cout << endl;
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    fibonacci(n);

    return 0;
}
//output:
//Enter number: 7
//Fibonacci series up to 7 terms: 0, 1, 1, 2, 3, 5, 8
