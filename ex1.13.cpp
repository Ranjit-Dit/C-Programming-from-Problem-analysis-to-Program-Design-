#include <iostream>
using namespace std;

int main()
{
    int hours, minutes, seconds, total = 0;
    cout << "Enter the hours minutes and seconds : ";
    cin >> hours >> minutes >> seconds;
    total = hours * 3600 + minutes * 60 + seconds;
    cout << "So the total time is " << total;
    return 0;
}