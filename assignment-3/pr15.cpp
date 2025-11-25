// WAP to determine class ‘ring’ from two base class the ‘diamond’ and ’gold’ the details
// of ring including its price(multiple inheritance).

#include <iostream>
using namespace std;
class Diamond {
protected:
    float diamondPrice;
public:
    Diamond(float dp) : diamondPrice(dp) {}
    void displayDiamondPrice() {
        cout << "Diamond Price: " << diamondPrice << endl;
    }
};
class Gold {
protected:
    float goldPrice;
public:
    Gold(float gp) : goldPrice(gp) {}
    void displayGoldPrice() {
        cout << "Gold Price: " << goldPrice << endl;
    }
};
class Ring : public Diamond, public Gold {
public:
    Ring(float dp, float gp) : Diamond(dp), Gold(gp) {}
    void displayTotalPrice() {
        float totalPrice = diamondPrice + goldPrice;
        cout << "Total Ring Price: " << totalPrice << endl;
    }
};
int main() {
    float diamondPrice, goldPrice;
    cout << "Enter Diamond Price: ";
    cin >> diamondPrice;
    cout << "Enter Gold Price: ";
    cin >> goldPrice;   
    Ring myRing(diamondPrice, goldPrice);
    myRing.displayDiamondPrice();
    myRing.displayGoldPrice();
    myRing.displayTotalPrice();
    return 0;
}
//output:
//Enter Diamond Price: 1500.75
//Enter Gold Price: 800.50
//Diamond Price: 1500.75
//Gold Price: 800.5
//Total Ring Price: 2301.25

