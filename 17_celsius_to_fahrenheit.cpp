// **Take a temperature in Celsius from the user and convert it into Fahrenheit.** 

#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Temperature in Fahrenheit = " << fahrenheit << endl;

    return 0;
}

