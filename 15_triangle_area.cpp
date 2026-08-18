// Take the base and height of a triangle and calculate its area.

#include <iostream>
using namespace std;

int main() {
    float base, height, area;

    cout << "Enter Base: ";
    cin >> base;

    cout << "Enter Height: ";
    cin >> height;

    area = 0.5 * base * height;

    cout << "Area of Triangle = " << area << endl;

    return 0;
}