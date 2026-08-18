#include<iostream>
using namespace std;

main(){
    int a;
    cout<<"enter the number: ";
    cin>>a;

    if (a > 0){
        cout<<"number is positive";
    }
    else if (a == 0){
        cout<<"number is zero";
    }
    else{
        cout<<"number is negetive";
    }
    return 0;
}