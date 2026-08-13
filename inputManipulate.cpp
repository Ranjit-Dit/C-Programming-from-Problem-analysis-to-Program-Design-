#include <iostream>
#include <string>

using namespace std;

int main()
{

    int firstNum, secondNum;
    double z;
    char ch;
    string name;

    firstNum = 4;
    secondNum = 2 * firstNum + 6;
    z = (firstNum + 1) / 2.0;
    ch = 'A';
    cin >> secondNum;
    cin >> z;
    firstNum = 2 * secondNum + static_cast<int>(z);
    cin >> name;

    secondNum = secondNum + 1;
    cin >> ch;
    firstNum = firstNum +  static_cast<int>(ch);
    z = firstNum - z;

    cout << firstNum << secondNum << z << ch << name;

    return 0;
}