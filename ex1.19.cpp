#include <iostream>
using namespace std;

const int SUMMERWEEK = 5;

int main() {
    float payRate, totalTax, IncomeBeforeTax, IncomeAfterTax, accessoriesCost, schoolSupplies, savings, parents, workingHour, remaining;

    cout << "Enter the pay rate : ";
    cin >> payRate;

    cout << "Enter the working hours : ";
    cin >> workingHour;

    IncomeBeforeTax = payRate * workingHour;
    totalTax = IncomeBeforeTax * 0.14;
    IncomeAfterTax = IncomeBeforeTax - totalTax;
    accessoriesCost = IncomeAfterTax * 0.1;
    schoolSupplies = IncomeAfterTax * 0.01;
    savings = IncomeAfterTax * 0.25;
    parents = savings / 2;

    cout << "Income before tax : " << IncomeBeforeTax << ". Income after tax : " << IncomeAfterTax << endl;
    cout << "Expense on clothes and other accessories :  " << accessoriesCost << endl;
    cout << "School Expenses : " << schoolSupplies << endl;
    cout << "Saving bonds : " << savings << endl;
    cout << "Parents : " << parents;


    return 0;
}