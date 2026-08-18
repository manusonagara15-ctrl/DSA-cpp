// Take marks of five subjects from the user and calculate the total marks, average marks, and percentage. Assume each subject is out of 100 marks.

#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3, m4, m5;
    float total, average, percentage;

    cout << "Enter marks of Subject 1: ";
    cin >> m1;

    cout << "Enter marks of Subject 2: ";
    cin >> m2;

    cout << "Enter marks of Subject 3: ";
    cin >> m3;

    cout << "Enter marks of Subject 4: ";
    cin >> m4;

    cout << "Enter marks of Subject 5: ";
    cin >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5;
    percentage = (total / 500) * 100;

    cout << "Total Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    return 0;
}