#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3, num4, num5, average;
    int sum;
    cout << "Enter the 5 decimal number : ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    sum = static_cast<int>(round(num1)) + static_cast<int>(round(num2)) + static_cast<int>(round(num3)) + static_cast<int>(round(num4)) + static_cast<int>(round(num5));
    average = sum / 5.0;

    cout << "So the sum is " << sum << " and the average is " << average;
    return 0;
}