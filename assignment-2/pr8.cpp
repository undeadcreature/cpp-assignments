// WAP to add two objects of class time (hours, Mins, sec) and display new time in proper format,
// using member function, Also perform addition of time type object using friend function.
#include <iostream>
using namespace std;
class Time {
    int hours;
    int mins;
    int secs;
public:
    void readData() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> mins;
        cout << "Enter seconds: ";
        cin >> secs;
    }
    void displayData() {
        cout << "Time: " << hours << " hours, " << mins << " minutes, " << secs << " seconds" << endl;
    }
    Time addTime(const Time& t) {
        Time result;
        result.secs = secs + t.secs;
        result.mins = mins + t.mins + result.secs / 60;
        result.secs %= 60;
        result.hours = hours + t.hours + result.mins / 60;
        result.mins %= 60;
        return result;
    }
    friend Time addTimeFriend(const Time& t1, const Time& t2);
};
Time addTimeFriend(const Time& t1, const Time& t2) {
    Time result;
    result.secs = t1.secs + t2.secs;
    result.mins = t1.mins + t2.mins + result.secs / 60;
    result.secs %= 60;
    result.hours = t1.hours + t2.hours + result.mins / 60;
    result.mins %= 60;
    return result;
}
int main() {
    Time t1, t2, t3, t4;
    cout << "Enter details for Time 1:\n";
    t1.readData();
    cout << "Enter details for Time 2:\n";
    t2.readData();
    t3 = t1.addTime(t2);
    cout << "\nTime after addition using member function:\n";
    t3.displayData();
    t4 = addTimeFriend(t1, t2);
    cout << "\nTime after addition using friend function:\n";
    t4.displayData();
    return 0;
}
//output:
// Enter details for Time 1:
// Enter hours: 1
// Enter minutes: 45
// Enter seconds: 50
// Enter details for Time 2:
// Enter hours: 2

