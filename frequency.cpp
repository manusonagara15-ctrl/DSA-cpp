#include<iostream>
using namespace std;

int main() {
    int arr[] = {10,20,10,30,20,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        cout << "Frequency of " << arr[i] << " is " << count << endl;
    }
    return 0;
}