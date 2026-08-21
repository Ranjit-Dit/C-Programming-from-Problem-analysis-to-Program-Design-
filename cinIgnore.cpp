#include <iostream>
using namespace std;

int main() {
    char ch;
    int a;

    cin.get(ch);
    cin.ignore(100, '\n');
    cin >> a;
    cout << ch << " " << a;

    return 0;
}