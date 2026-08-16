#include <iostream>
using namespace std;

int main()
{
    int hours, minutes, seconds;
    cout << "Enter the seconds : ";
    cin >> seconds;
    hours = seconds / 3600;
    seconds %= 3600;
    minutes = seconds / 60;
    seconds %= 60;
    cout << hours << ":" << minutes << ":" << seconds;
    return 0;
}