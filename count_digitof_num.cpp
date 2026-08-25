// wap to count the digit of a number

#include <iostream>
using namespace std;

int main() {
    int num = 5432,
    count = 0;

    while (num != 0) {
        num = num / 10;
        count++;
    }

    cout << "Number of digits = " << count << endl;

    return 0;
}