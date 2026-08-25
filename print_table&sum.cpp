// wap to print the table any number and sum.

#include <iostream>
using namespace std;

int main() {
    int num = 5;
    int i = 1;
    int sum = 0;

    while(i < 4) {
        int result = num * i;
        cout << result << endl;

        sum = sum + result;
        i++;
    }

    cout << "sum is: " << sum;

    return 0;
}
