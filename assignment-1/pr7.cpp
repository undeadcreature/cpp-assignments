//write a program to find armstrong numbers between 100 and 999
#include <iostream>
using namespace std;

int main(){
    for(int num=100; num<=999; num++){
        int originalNum = num;
        int sum = 0;
        while(originalNum != 0){
            int digit = originalNum % 10;
            sum += digit * digit * digit;
            originalNum /= 10;
        }
        if(sum == num){
            cout << num << endl;
        }
    }
    return 0;
        
}
//output:
//153
//370
//371
//407
