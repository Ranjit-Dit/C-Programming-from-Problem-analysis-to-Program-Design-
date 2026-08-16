#include <iostream>

using namespace std;

int main()
{
    string name;
    float payRate, hoursWorked, salary;

    cout << "Enter the name : ";
    cin >> name;
    cout << endl
         << "Enter the pay Rate : ";
    cin >> payRate;
    cout << endl
         << "Enter the hours u worked :  ";
    cin >> hoursWorked;

    salary = payRate * hoursWorked;

    cout << "Name : " << name << endl;
    cout << "Pay Rate : " << payRate << endl;
    cout << "Hours Worked : " << hoursWorked << endl;
    cout << "Salary : " << salary << endl;

    return 0;
}
