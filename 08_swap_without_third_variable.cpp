//**Take two numbers from the user and swap their values without using a third variable.**


#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;

    cout<<"Before swapping: "<<endl;
    cout<<"1st number: "<<a<<endl;
    cout<<"2nd number: "<<b<<endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"after swapping: "<<endl;
    cout<<"value of a is: "<<a<<endl;
    cout<<"value of b is: "<<b<<endl;

    return 0;
}