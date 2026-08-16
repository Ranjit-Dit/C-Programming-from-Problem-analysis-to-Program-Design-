#include <iostream>
using namespace std;

int main() {
    float originalPrice, sellingPrice, markupPercentage, markupPrice, salesTaxRate, salesTax;
    cout << "Enter the original price  : ";
    cin >> originalPrice;
    cout << "Enter the markup percentage : ";
    cin >> markupPercentage;
    cout << "Enter the selling tax rate : ";
    cin >> salesTaxRate;
    
    markupPrice = originalPrice + originalPrice * markupPercentage / 100;
    salesTax = markupPrice * salesTaxRate / 100;
    sellingPrice = markupPrice + salesTax;

    cout << "So the selling Price is : " << sellingPrice;
    return 0;
}