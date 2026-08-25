#include<iostream>
using namespace std;

int main(){

    int num = 5;

    for(int i = 1; i < 11; i++) {
        int result = num * i;
        cout << num << "*" << i << " = " << result << endl;
    }

    return 0;
}


// using while loop

// int num = 5;
// int i = 1;
// while(i < 11){
//     int result = num * i;
//     cout<<num<<"*"<<i<<"="<<return;
//     i++;
// }