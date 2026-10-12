// write a program to take input from the user.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout <<name<< endl;
    return 0;
}