// Take a distance in centimeters and convert it into meters and kilometers.

#include <iostream>
using namespace std;

int main() {
    float centimeters, meters, kilometers;

    cout << "Enter distance in centimeters: ";
    cin >> centimeters;

    meters = centimeters / 100;
    kilometers = centimeters / 100000;

    cout << "Distance in meters = " << meters << endl;
    cout << "Distance in kilometers = " << kilometers << endl;

    return 0;
}