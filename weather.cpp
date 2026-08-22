// wap to take a number from the user and print the season
//eg. 11,12,1,2 --> winter season
//    3,4,5,6 --> summer season
//    7,8,9,10 --> rainy season

#include<iostream>
using namespace std;

main(){
    int a;
    cout<<"enter the number: ";
    cin>>a;

    if(a == 11 || a == 12 || a == 1 || a == 2){
        cout<<"winter season";
    }
    else if(a == 3 || a == 4 || a == 5 || a == 6){
        cout<<"summer season";
    }
    else if(a == 7 || a == 8 || a == 9 || a == 10){
        cout<<"rainy season";
    }
    else{
        cout<<"no season";
    }

    return 0;
}