#include <iostream>
#include <cmath>

using namespace std;

void calculateRectangleArea() {
    double length, breadth;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    double area = length * breadth;
    cout << "The area of the rectangle is: " << area << endl;
}

void calculateTriangleArea() {
    double base, height;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    double area = 0.5 * base * height;
    cout << "The area of the triangle is: " << area << endl;
}

void calculateCircleArea() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double area = M_PI * pow(radius, 2);
    cout << "The area of the circle is: " << area << endl;
}

void calculateParallelogramArea() {
    double base, height;
    cout << "Enter the base of the parallelogram: ";
    cin >> base;
    cout << "Enter the height of the parallelogram: ";
    cin >> height;
    double area = base * height;
    cout << "The area of the parallelogram is: " << area << endl;
}

int main() {
    int choice;
    cout << "Calculate Area of Different Shapes" << endl;
    cout << "1. Rectangle" << endl;
    cout << "2. Triangle" << endl;
    cout << "3. Circle" << endl;
    cout << "4. Parallelogram" << endl;
    cout << "Enter the number of the shape you want to calculate the area for: ";
    cin >> choice;

    switch (choice) {
        case 1:
            calculateRectangleArea();
            break;
        case 2:
            calculateTriangleArea();
            break;
        case 3:
            calculateCircleArea();
            break;
        case 4:
            calculateParallelogramArea();
            break;
        default:
            cout << "Invalid choice! This shape is not available." << endl;
    }

    return 0;
}