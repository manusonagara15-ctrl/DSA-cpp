// **Take an ASCII value from the user and print the corresponding character.**


#include <iostream>
using namespace std;

int main() {
    int asciiValue;

    cout << "Enter an ASCII value: ";
    cin >> asciiValue;

    cout << "Corresponding character: " << char(asciiValue);

    return 0;
}