// Take a temperature in Fahrenheit from the user and convert it into Celsius.

#include <iostream>
using namespace std;

int main() {
    float fahrenheit, celsius;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "Temperature in Celsius = " << celsius << endl;

    return 0;
}