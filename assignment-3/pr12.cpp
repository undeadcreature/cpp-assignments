// Perform the functionality of insertion (<<) and extractor (>>) operator with object of
// class time having data members as hr, min, sec (i.e. if object T of class time directly can
// be passed at insertor and extractor to display it).

#include <iostream>
using namespace std;
class Time {
    int hr;
    int min;
    int sec;
public:
    Time() : hr(0), min(0), sec(0) {}
    Time(int h, int m, int s) : hr(h), min(m), sec(s) {}    
    // Overloading extraction operator >>
    friend istream& operator>>(istream& in, Time& t) {
        cout << "Enter hours, minutes and seconds: ";
        in >> t.hr >> t.min >> t.sec;
        return in;
    }
    // Overloading insertion operator <<
    friend ostream& operator<<(ostream& out, const Time& t) {
        out << "Time: " << t.hr << " hr " << t.min << " min " << t.sec << " sec";
        return out;
    }
};
int main() {
    Time t1;
    cin >> t1; // Using overloaded >> operator
    cout << t1; // Using overloaded << operator
    return 0;
}
//output:
//Enter hours, minutes and seconds: 2 30 45
//Time: 2 hr 30 min 45 sec
