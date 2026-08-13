#include <iostream>

using namespace std;
// always use variable instead of using constant directly
const double CENTIMETERS_PER_INCH = 2.54;
const double INCHES_PER_FOOT = 12;

int main()
{
    int feet;
    int inches;
    int totalInches;
    double centimeters;

    cout << "Enter the feet and inches ";
    cin >> feet >> inches;

    cout << "So u entered " << feet << " feet and " << inches << " inches" << endl;

    totalInches = feet * INCHES_PER_FOOT;

    centimeters = totalInches * CENTIMETERS_PER_INCH;

    cout << "So the total centimeter is " << centimeters;

    return 0;
}