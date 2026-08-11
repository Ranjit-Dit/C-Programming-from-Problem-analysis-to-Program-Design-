#include <iostream>

using namespace std;

int main()
{
    int a, b, c, sum;
    float area;
    cout << "Enter the length of three sides : ";
    cin >> a, b, c;
    sum = a + b + c;
    area = sqrt(sum * (sum - a) * (sum - b) * (sum - c));

    cout << "So the area is " << area;

    return 0;
}
/*
start the program
declare variable a,b,c,sum,float,area;
read variable a,b,c
operate sum = a + b+ c
operate area = sqrt(sum * (sum - a) * (sum - b) * (sum - c))
display "so the area is ", area
end the program
*/