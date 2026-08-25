#include<iostream>
using namespace std;

int main(){
    int num = 5;
    int fact = 1;

    while (num > 0){
        fact = fact * num;
        cout<<"factorial is: "<<fact;
        num--;
    }

    return 0;
}
