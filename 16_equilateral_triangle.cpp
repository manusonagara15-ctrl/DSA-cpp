// Take the side of an equilateral triangle and calculate its area.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float side, area;

    cout << "Enter side: ";
    cin >> side;

    area = (sqrt(3) / 4) * side * side;

    cout << "Area of Equilateral Triangle = " << area << endl;

    return 0;
}