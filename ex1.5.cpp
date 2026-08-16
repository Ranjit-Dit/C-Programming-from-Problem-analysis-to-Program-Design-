#include <iostream>

using namespace std;

int main()
{
    float length, breath, perimeter, area;
    cout << "Enter the length and breath : ";
    cin >> length >> breath;

    perimeter = 2 * (length + breath);
    area = length * breath;

    cout << "So the perimeter is " << perimeter << " and area is " << area;
    return 0;
}