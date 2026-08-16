#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4, num5;
    float average;
    cout << "Enter the five number : ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    average = (num1 + num2 + num3 + num4 + num5) / 5.0;

    cout << "So the average is " << average;

    return 0;
}