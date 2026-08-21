#include <iostream>
using namespace std;

int main() {
    int number, temp;

    cout << "Line ! : Please enter an integer : ";
    cin >> number;
    cout << endl;

    temp = number;

    if (number < 0)
        number = -number;
    cout << "Line 7: The absolute value of "
        << temp << " is " << number << endl;
    return 0;
}