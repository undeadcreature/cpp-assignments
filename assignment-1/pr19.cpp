// //WAP that finds the maximum range of a triangle&#39;s third edge, where the side lengths are all
// integers. (Note: side 3 = (side 1 + side 2) - 1)
#include <iostream>
using namespace std;
int main() {
    int side1, side2;

    cout << "Enter length of side 1: ";
    cin >> side1;
    cout << "Enter length of side 2: ";
    cin >> side2;

    if (side1 <= 0 || side2 <= 0) {
        cout << "Side lengths must be positive integers." << endl;
        return 1;
    }

    int maxSide3 = (side1 + side2) - 1;
    cout << "The maximum length of the third side is: " << maxSide3 << endl;

    return 0;
}

//output:
//Enter length of side 1: 5
//Enter length of side 2: 7
//The maximum length of the third side is: 11
//Enter length of side 1: 10
//Enter length of side 2: 15
//The maximum length of the third side is: 24