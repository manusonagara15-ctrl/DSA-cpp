// Take Principal, Rate, and Time from the user and calculate Simple Interest and Total Amount.

#include <iostream>
using namespace std;

int main() {
    float principal, rate, time;
    float simpleInterest, totalAmount;

    cout << "Enter Principal: ";
    cin >> principal;

    cout << "Enter Rate: ";
    cin >> rate;

    cout << "Enter Time: ";
    cin >> time;

    simpleInterest = (principal * rate * time) / 100;
    totalAmount = principal + simpleInterest;

    cout << "Simple Interest = " << simpleInterest << endl;
    cout << "Total Amount = " << totalAmount << endl;

    return 0;
}