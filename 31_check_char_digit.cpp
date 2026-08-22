//  Write a program to input any symbol and check whether it is a character or digit

#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter any symbol: ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        cout << "It is a Character.";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "It is a Digit.";
    }
    else
    {
        cout << "It is a Special Symbol.";
    }

    return 0;
}