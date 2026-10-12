#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    //1. creation
    unordered_map<string, string> names;

    //2. insertion of values
    names["name1"] = "hashit";
    names["name2"] = "rahi";
    names["name3"] = "sneha";

    //3. access of values
    cout << "Name 1: " << names["name1"] << endl;
    cout << "Name 2: " << names["name2"] << endl;
    cout << "Name 3: " << names["name3"] << endl;

    //4. update
    names["name2"] = "parisha";
    cout << "updated name: " << names["name2"] << endl;

    //5. print all the key & value of map
    for(auto p: names){
        cout << p.first << "--->" << p.second << endl;
    }

    return 0;
}
