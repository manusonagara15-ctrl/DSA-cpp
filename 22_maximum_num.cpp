// Write a program to find the maximum between three numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        cout << "Maximum number = " << a;
    }
    else if (b >= a && b >= c)
    {
        cout << "Maximum number = " << b;
    }
    else
    {
        cout << "Maximum number = " << c;
    }

    return 0;
}