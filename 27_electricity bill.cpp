
// 27. Write a program to input electricity unit charges and calculate total electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

#include <iostream>
using namespace std;

int main(){
    int units;
    cout<<"Enter the units ";
    cin>>units;

    if(units <= 50){
        int amount = units * 0.5 * 1.2; 
        cout<<"Amount is : "<<amount<<endl;
    }

    else if(units <= 100){
        int amount = (25 + (units - 50) * 0.75)*1.2;
        cout<<"Amount is : "<<amount << endl; 
    }

    else if(units <= 150){
        int amount = (100 + (units - 150) * 1.2) * 1.2;
        cout<<"Amount is : "<<amount << endl; 
            }

    else {
        int amount = (220 + (units - 250) * 1.5) * 1.2;
         cout<<"Amount is : "<<amount << endl; 
    }


    return 0;
}