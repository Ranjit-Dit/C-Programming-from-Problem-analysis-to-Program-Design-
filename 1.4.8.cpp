#include <iostream>
#define SECRET 40

using namespace std;

int main()
{
    int num1, num2, newNum;
    cout << "Enter two number : ";
    cin >> num1 >> num2;

    newNum = num1 * 2 + num2;

    cout << "So the output is " << newNum << endl;

    newNum += SECRET;

    cout << newNum;

    return 0;
}