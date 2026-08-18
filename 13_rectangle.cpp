// Take the length and breadth of a rectangle and calculate its area and perimeter.

#include <iostream>
using namespace std;

int main() {
    float length, breadth;
    float area, perimeter;

    cout << "Enter Length: ";
    cin >> length;

    cout << "Enter Breadth: ";
    cin >> breadth;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;

    return 0;
}