// count of vowels in a string

#include <iostream>
using namespace std;

int main() {
    string str = "today is wonderfull day";
    int count = 0;
    for (int i = 0; i < str.length(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    cout << "Number of vowels in the string: " << count << endl;
    return 0;
}