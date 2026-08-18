// Take the radius of a circle and calculate its diameter, circumference, and area.

#include <iostream>
using namespace std;

int main() {
    float radius;
    float diameter, circumference, area;
    const float PI = 3.14159;

    cout << "Enter Radius: ";
    cin >> radius;

    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    cout << "Diameter = " << diameter << endl;
    cout << "Circumference = " << circumference << endl;
    cout << "Area = " << area << endl;

    return 0;
}