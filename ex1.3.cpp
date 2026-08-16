#include <iostream>

using namespace std;

int main()
{
    float decimal = 30.5;
    int integer;
    integer = static_cast<int>(round(decimal));
    cout << " So the round of is " << integer;
    return 0;
}