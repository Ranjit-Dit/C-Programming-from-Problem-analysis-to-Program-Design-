#include <iostream>
using namespace std;

int main() {
    string name1, name2, name3;
    cout << "Enter first name : ";
    cin >> name1;
    cout << "Enter second name : ";
    cin >> name2;
    cout << "Enter third name : ";
    cin >> name3;

    cout << name1 << " " << name2 << " " << name3 << endl;
    cout << name1 << " " << name3 << " " << name2 << endl;
    cout << name2 << " " << name1 << " " << name3 << endl;
    cout << name2 << " " << name3 << " " << name1 << endl;
    cout << name3 << " " << name1 << " " << name2 << endl;
    cout << name3 << " " << name2 << " " << name1 << endl;


    return 0;
}