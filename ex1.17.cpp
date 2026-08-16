#include <iostream>
#include<cmath>
using namespace std;

const float CARTONCAPACITY = 3.78;

int main() {
    float noOfCarton, costOfProducing, totalProduction, profit;

    cout << "Enter the total amount of milk prodced  : ";
    cin >> totalProduction;

    noOfCarton = ceil(totalProduction / CARTONCAPACITY);
    costOfProducing = totalProduction * 0.38;
    profit = noOfCarton * 0.27;

    cout << "So the no. of carton is " << noOfCarton << " , cost of producing is " << costOfProducing << " and Profit is " << profit;
    return 0;
}