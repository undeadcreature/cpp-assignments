// WAP to design a converter that converts the given distance from meter to centimetre and
// from feet to inches and vice versa. (Note: 1 meter = 100 centimeters and 1 feet = 12 inches)
#include <iostream>
using namespace std;
int main() {
    int choice;
    double distance, convertedDistance;

    cout << "Distance Converter Menu:" << endl;
    cout << "1. Meters to Centimeters" << endl;
    cout << "2. Centimeters to Meters" << endl;
    cout << "3. Feet to Inches" << endl;
    cout << "4. Inches to Feet" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter distance in meters: ";
            cin >> distance;
            convertedDistance = distance * 100; // 1 meter = 100 centimeters
            cout << distance << " meters = " << convertedDistance << " centimeters" << endl;
            break;
        case 2:
            cout << "Enter distance in centimeters: ";
            cin >> distance;
            convertedDistance = distance / 100; // 100 centimeters = 1 meter
            cout << distance << " centimeters = " << convertedDistance << " meters" << endl;
            break;
        case 3:
            cout << "Enter distance in feet: ";
            cin >> distance;
            convertedDistance = distance * 12; // 1 foot = 12 inches
            cout << distance << " feet = " << convertedDistance << " inches" << endl;
            break;
        case 4:
            cout << "Enter distance in inches: ";
            cin >> distance;
            convertedDistance = distance / 12; // 12 inches = 1 foot
            cout << distance << " inches = " << convertedDistance << " feet" << endl;
            break;
        default:
            cout << "Invalid choice! Please select a valid option." << endl;
            break;
    }

    return 0;
}
//output:
//Distance Converter Menu:
//1. Meters to Centimeters
//2. Centimeters to Meters
//3. Feet to Inches
//4. Inches to Feet
//Enter your choice (1-4): 1
//Enter distance in meters: 5
//5 meters = 500 centimeters
//Distance Converter Menu:

