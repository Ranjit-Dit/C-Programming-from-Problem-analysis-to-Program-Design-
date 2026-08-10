#include <iostream>

using namespace std;

int main(){
    int salePrice;
    float amountDue, salesTax, stateSalesTax, citySalesTax,luxuryTax = 0;

    cout << "Enter the selling price : " ;
    cin >> salePrice;

    stateSalesTax = salePrice * 0.04;
    citySalesTax = salePrice * 0.015;

    if(salePrice > 10000){
        luxuryTax = salePrice * 0.1;
    }
    
    salesTax = stateSalesTax + citySalesTax + luxuryTax;

    amountDue  = salePrice + salesTax;

    cout << "So the actually selling price " << amountDue << endl;

    return 0;
}