#include <iostream>
#include<cmath>
using namespace std;

const float CARTONCAPACITY = 3.78;

int main() {
    float noOfCarton, costOfProducing, totalProduction, totalProfit, rateOfProduction, profitOnCarton;

    cout << "Enter the total amount of milk prodced  : ";
    cin >> totalProduction;

    cout << "Enter the cost of production of each litre : ";
    cin >> rateOfProduction;

    cout << "Enter the profit on each carton ";
    cin >> profitOnCarton;



    noOfCarton = ceil(totalProduction / CARTONCAPACITY);
    costOfProducing = totalProduction * rateOfProduction;
    totalProfit = noOfCarton * profitOnCarton;

    cout << "So the no. of carton is " << noOfCarton << " , cost of producing is " << costOfProducing << " and Profit is " << totalProfit;
    return 0;
}