// find the odd num in between 23 to 29.

#include<iostream>
using namespace std;

int main(){
    int count = 0;
    for (int i = 23; i <= 29; i++){
        if (i % 2 != 0){
            count++;
        }
    }
    cout<<count;
    return 0;
}