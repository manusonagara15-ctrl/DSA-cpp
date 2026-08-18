//  **Take two numbers from the user and print their sum, difference, product, quotient, and remainder.**

#include <iostream>
using namespace std;

int main(){
    int num1, num2;

    cout<<"enter 1st numbers: ";
    cin>>num1;
    cout<<"enter 2nd numbers: ";
    cin>>num2;

    cout<<"Sum: "<<num1 + num2<<endl;
    cout<<"difference: "<<num1 - num2<<endl;
    cout<<"product: "<<num1 * num2<<endl;
    cout<<"quotient: "<<num1 / num2<<endl;
    cout<<"remainder: "<<num1 % num2<<endl;
    return 0;
}