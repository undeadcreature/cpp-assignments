// WAP to find and display product of private data members of class num (no1, no2) through member
// functions.
#include <iostream>
using namespace std;

class num{
    private:
    int result;
    int no1;
    int no2;

    public:
        int prod(int no1, int no2){
            result = no1 * no2;
            return result;
        }

        void display(){
            cout<<"result is : "<<result<<endl;
        }
};

int main(){
    num n;
    n.prod(3,4);
    n.display();
    return 0;
}