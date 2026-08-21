#include<iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    cout << "Line 5 : Enter four integers : ";
    cin >> a >> b >> c >> d;

    cout << endl;

    cout << "Line 8: The numbers you entered are : "
        << endl;

    cout << "Line 9: a = " << a << " , b = " << b
        << " , c = " << c << " , d = " << d << endl;

    return 0;
}