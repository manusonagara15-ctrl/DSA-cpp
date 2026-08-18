//  Take two numbers x and y from the user and calculate x^y.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    double result = pow(x, y);

    cout << "x^y = " << result << endl;

    return 0;
}