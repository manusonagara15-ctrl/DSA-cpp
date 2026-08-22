//  26.Write a program to input basic salary of an employee and calculate its Gross salary according to following:
// 	Basic Salary <= 10000 : HRA = 20%, DA = 80%
// 	Basic Salary <= 20000 : HRA = 25%, DA = 90%
// 	Basic Salary > 20000 : HRA = 30%, DA = 95%

#include <iostream>
using namespace std;

int main()
{
    float basicSalary, HRA, DA, grossSalary;

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    if (basicSalary <= 10000)
    {
        HRA = basicSalary * 20 / 100;
        DA = basicSalary * 80 / 100;
    }
    else if (basicSalary <= 20000)
    {
        HRA = basicSalary * 25 / 100;
        DA = basicSalary * 90 / 100;
    }
    else
    {
        HRA = basicSalary * 30 / 100;
        DA = basicSalary * 95 / 100;
    }

    grossSalary = basicSalary + HRA + DA;

    cout << "HRA = " << HRA << endl;
    cout << "DA = " << DA << endl;
    cout << "Gross Salary = " << grossSalary << endl;

    return 0;
}