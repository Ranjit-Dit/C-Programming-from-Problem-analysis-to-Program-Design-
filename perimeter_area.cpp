#include <iostream>

using namespace std;

int main(){
    int length,breath;
    float perimeter,area;

    cout << "Enter the length and breath : " << endl;
    cin >> length >> breath;

    perimeter = 2*(length + breath);
    area = length * breath;

    cout << "So the perimeter is " << perimeter << " So the area is " << area << endl;

    return 0;
}
