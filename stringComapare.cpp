#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string a;
    string b;

    cout << "Enter the first string: ";
    cin >> a;
    cout << "Enter the second string: ";
    cin >> b;

    if (a == b) {
        cout << "Strings are equal" << endl;
    } else {
        cout << "Strings are not equal" << endl;
    }

    return 0;
}   