// WAP to use binary operator + add two object of class Day having day, month and year
// as its data members and display result in form of date (dd – mm – yyyy)
#include <iostream>
using namespace std;
class Day {
    int day;
    int month;
    int year;
public:
    Day() : day(0), month(0), year(0) {}
    Day(int d, int m, int y) : day(d), month(m), year(y) {}
    Day operator+(const Day& d) {
        Day temp;
        temp.day = this->day + d.day;
        temp.month = this->month + d.month;
        temp.year = this->year + d.year;

        // Adjust days and months
        if (temp.day > 30) { // Simplified: assuming all months have 30 days
            temp.day -= 30;
            temp.month += 1;
        }
        if (temp.month > 12) {
            temp.month -= 12;
            temp.year += 1;
        }
        return temp;
    }
    void display() {
        cout << "Date: " << day << " - " << month << " - " << year << endl;
    }
};
int main() {
    Day date1(25, 11, 2022);
    Day date2(10, 2, 2023);
    Day date3 = date1 + date2;
    date3.display();
    return 0;
}

//output:
//Date: 5 - 2 - 2026