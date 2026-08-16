#include <iostream>

using namespace std;

const int RATE = 40;

int main()
{
    int wages, hoursWorked;
    cout << "Enter the number of hour worked : ";
    cin >> hoursWorked;

    wages = hoursWorked * RATE;

    cout << "You have earned " << wages;
    return 0;
}