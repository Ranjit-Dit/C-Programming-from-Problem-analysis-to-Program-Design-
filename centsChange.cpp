#include <iostream>

using namespace std;

const int HALFDOLLARS = 50;
const int QUARTERS = 25;
const int DIMES = 10;
const int NICKELS = 5;
const int PENNIES = 1;

int main()
{
    int cents, halfDollars, quarters, dimes, nickels, pennies;

    cout << "Enter the cents : ";
    cin >> cents;
    cout << endl;

    halfDollars = cents / HALFDOLLARS;
    cents %= HALFDOLLARS;

    quarters = cents / QUARTERS;
    cents %= QUARTERS;

    dimes = cents / DIMES;
    cents %= DIMES;

    nickels = cents / NICKELS;
    cents %= NICKELS;

    pennies = cents;

    cout << "So u have " << halfDollars << " halfDollars " << quarters << " quarters " << dimes << " dimes " << nickels << " nickels " << pennies << " pennies";

    return 0;
}
