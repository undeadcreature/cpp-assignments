// Create class shape. Use this class to store two double type values that could be used to
// compute the area of figures. Derive tow specific classes called triangle, rectangle & circle from
// the base shape. Add to the base class a member function get_data() to initialize base class
// data members and another member function display_area() to compute and display the area
// of figures. Make display_area() as a virtual function and redefine this function in the derived
// classes to suit their requirements.
// Using these four classes, design a program that will accept dimensions of a triangle or a
// rectangle or circle interactively & display area.

#include <iostream>
using namespace std;
class shape {
protected:
    double a, b; // dimensions
public:
    void get_data(double x, double y = 0) {
        a = x;
        b = y;
    }
    virtual void display_area() = 0; // pure virtual function
};
class triangle : public shape {
public:

    void display_area() override {
        double area = 0.5 * a * b;
        cout << "Area of Triangle: " << area << endl;
    }
};
class rectangle : public shape {
public:
    void display_area() override {
        double area = a * b;
        cout << "Area of Rectangle: " << area << endl;
    }
};
class circle : public shape {
public:
    void display_area() override {
        double area = 3.14 * a * a; // b is not used for circle
        cout << "Area of Circle: " << area << endl;
    }
};  
int main() {
    shape* s;
    int choice;
    double dim1, dim2;

    cout << "Choose shape to calculate area:\n";
    cout << "1. Triangle\n2. Rectangle\n3. Circle\n";
    cin >> choice;

    switch (choice) {
        case 1: {
            s = new triangle();
            cout << "Enter base and height of triangle: ";
            cin >> dim1 >> dim2;
            s->get_data(dim1, dim2);
            break;
        }
        case 2: {
            s = new rectangle();
            cout << "Enter length and width of rectangle: ";
            cin >> dim1 >> dim2;
            s->get_data(dim1, dim2);
            break;
        }
        case 3: {
            s = new circle();
            cout << "Enter radius of circle: ";
            cin >> dim1;
            s->get_data(dim1);
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    s->display_area();
    delete s; // free allocated memory
    return 0;
}

//output:
// Choose shape to calculate area:
// 1. Triangle
// 2. Rectangle
// 3. Circle
// 1
// Enter base and height of triangle: 10 5
// Area of Triangle: 25
