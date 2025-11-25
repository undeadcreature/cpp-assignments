// WAP to design class shape (int height, int width, int length) to find out the area of square,
// rectangle, triangle and circle using concept of function overloading.
#include <iostream>
using namespace std;
class Shape {
    int height;
    int width;
    int length;
    const double pi = 3.14159;
public:
    void readSquareData() {
        cout << "Enter side length of square: ";
        cin >> length;
    }
    void readRectangleData() {
        cout << "Enter height and width of rectangle: ";
        cin >> height >> width;
    }
    void readTriangleData() {
        cout << "Enter height and base of triangle: ";
        cin >> height >> width;
    }
    void readCircleData() {
        cout << "Enter radius of circle: ";
        cin >> length;
    }
    double area(int side) {
        return side * side; // Area of square
    }
    double area(int h, int w) {
        return h * w; // Area of rectangle
    }
    double area(double h, double b) {
        return 0.5 * h * b; // Area of triangle
    }
    double area(double r) {
        return pi * r * r; // Area of circle
    }
};
int main() {
    Shape shape;
    shape.readSquareData();
    cout << "Area of Square: " << shape.area(shape.length) << endl;
    shape.readRectangleData();
    cout << "Area of Rectangle: " << shape.area(shape.height, shape.width) <<
    endl;
    shape.readTriangleData();
    cout << "Area of Triangle: " << shape.area(static_cast<double>(shape.height),
    static_cast<double>(shape.width)) << endl;
    shape.readCircleData();
    cout << "Area of Circle: " << shape.area(static_cast<double>(shape.length))
    << endl;
    return 0;
}

//output:
// Enter side length of square: 4
// Area of Square: 16
// Enter height and width of rectangle: 5 6
// Area of Rectangle: 30
// Enter height and base of triangle: 4 8
// Area of Triangle: 16
// Enter radius of circle: 3
// Area of Circle: 28.274327