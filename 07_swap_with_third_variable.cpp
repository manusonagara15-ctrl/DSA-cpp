// **Take two numbers from the user and swap their values using a third variable.

#include <iostream>
using namespace std;

int main(){
    int num1, num2, temp;

    cout<<"enter 1st numbers: ";
    cin>>num1;
    cout<<"enter 2nd numbers: ";
    cin>>num2;

    temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<"After swapping: "<<endl;
    cout<<"1st number: "<<num1<<endl;
    cout<<"2nd number: "<<num2<<endl;

    return 0;
}