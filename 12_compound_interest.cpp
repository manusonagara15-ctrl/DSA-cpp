// Take Principal, Rate, and Time from the user and calculate Compound Interest and Total Amount.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float principal, rate, time;
    float compoundInterest, totalAmount;

    cout << "Enter Principal: ";
    cin >> principal;

    cout << "Enter Rate: ";
    cin >> rate;

    cout << "Enter Time: ";
    cin >> time;

    totalAmount = principal * pow((1 + rate / 100), time);
    compoundInterest = totalAmount - principal;

    cout << "Compound Interest = " << compoundInterest << endl;
    cout << "Total Amount = " << totalAmount << endl;

    return 0;
}