// wap to create an array name friends and take the 5 name of print from user and print it.


#include<iostream>
using namespace std;

int main()
{
    string friends[5];
    cout << "Enter 5 friend names: ";
    for(int i = 0; i < 5; i++)
    {
        cin >> friends[i];
    }
    cout << "Friend names are: ";
    for(int i = 0; i < 5; i++)
    {
        cout << friends[i] << " ";
    }
    cout << endl;
    return 0;
}
