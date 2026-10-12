#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<string> friends = {"manu", "shriya", "sneha", "parisha", "nidhi"};
    cout << "Friend names are: ";
    for(const auto& name : friends)
    {
        cout << name << " ";
    }
    cout << endl;
    return 0;
}