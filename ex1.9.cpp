#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3, num4, num5;
    int newNum;

    cout << "Enter 5 decimal number : ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    newNum = static_cast<int>(round(num1 + num2 + num3 + num4 + num5));

    cout << "So the rounded number is " << newNum;

    return 0;
}