#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    //1. creation
    unordered_map<int, int> marks;

    //2. insertion of values
    marks[101] = 92;
    marks[102] = 84;
    marks[103] = 87;

    //3. access of values
    cout << "Mark for student 102: " << marks[102] << endl;
    cout << "Mark for student 103: " << marks[103] << endl;

    //4. update
    marks[102] = 94;
    cout << "updated marks: "<<marks[102]<<endl;

    //5. print all the key & value of map
    for(auto p: marks){
        cout << p.first << "--->" << p.second << endl;
    }

    return 0;
}