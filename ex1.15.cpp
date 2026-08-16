#include <iostream>
using namespace std;

int main() {
    double centimeters;
    int yards, feets, inches;
    cout << "Enter the centimeter : ";
    cin >> centimeters;

    inches = static_cast<int>(round(centimeters / 2.54));

    yards = inches / 36;
    inches %= 36;
    feets = inches / 12;
    inches %= 12;

    cout << "So the " << centimeters << " cm is " << yards << " yards " << feets << " feets " << inches << " inches";

    return 0;
}