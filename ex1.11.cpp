#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the five digit number : ";
    cin >> num;

    cout << num / 1000 << endl;
    num %= 1000;
    cout << num / 100 << endl;
    num %= 100;
    cout << num / 10 << endl;
    num %= 10;
    cout << num / 1 << endl;

    return 0;
}