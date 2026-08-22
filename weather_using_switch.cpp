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

    char ch;

    switch (a){
        case 1 :
            cout<<"winter season";
            break;

        case 2 :
            cout<<"winter season";
            break;

        case 3 :
            cout<<"summer season";
            break;

        case 4 :
            cout<<"summer season";
            break;

        case 5 :
            cout<<"summer season";
            break;

        case 6 :
            cout<<"summer season";
            break;

        case 7 :
            cout<<"rainy season";
            break;

        case 8 :
            cout<<"rainy season";
            break;

        case 9 :
            cout<<"rainy season";
            break;

        case 10 :
            cout<<"rainy season";
            break;

        case 11 :
            cout<<"winter season";
            break;

        case 12 :
            cout<<"winter season";
            break;

        default:
            cout<<"you have enter wrong input";

    }

    return 0;
}