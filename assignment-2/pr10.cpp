// WAP to read data from user for x and y coordinates and swap it using member function for class
// axis (int x, int y). Show use of parameterized constructor.
#include <iostream>
using namespace std;
class Axis {
    int x;
    int y;
public:
    // Parameterized constructor to initialize x and y
    Axis(int xCoord, int yCoord) : x(xCoord), y(yCoord)
    {
    }
    // Member function to swap x and y coordinates
    void swapCoordinates() {
        int temp = x;
        x = y;
        y = temp;
    }
    // Function to display the coordinates
    void displayCoordinates() {
        cout << "X Coordinate: " << x << ", Y Coordinate: " << y << endl;
    }
};
int main() {
    int x, y;
    cout << "Enter X coordinate: ";
    cin >> x;
    cout << "Enter Y coordinate: ";
    cin >> y;

    Axis axis(x, y);

    cout << "Original Coordinates:\n";
    axis.displayCoordinates();

    axis.swapCoordinates();

    cout << "Coordinates after swapping:\n";
    axis.displayCoordinates();

    return 0;
}   
//output:
// Enter X coordinate: 10
// Enter Y coordinate: 20
// Original Coordinates:
// X Coordinate: 10, Y Coordinate: 20
// Coordinates after swapping:
// X Coordinate: 20, Y Coordinate: 10   