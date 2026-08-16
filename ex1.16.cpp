#include <iostream>
using namespace std;

const float PI = 3.1415593;

int main() {
    int a, b, c;
    float radius;

    cout << "Enter the sides of triangle : ";
    cin >> a >> b >> c;

    radius = (a + b + c) / (2.0 * PI);

    cout << "So the radius of the circle is " << radius;
    return 0;
}