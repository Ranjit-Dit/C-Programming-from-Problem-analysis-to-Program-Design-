#include <iostream>

using namespace std;

int main(){
    float baseSalary, noOfServiceYears,additionalBonus,totalSales,bonus,payCheck;

    cout << "Enter the base Salary  and no. of experience : "; 
    cin >>  baseSalary >> noOfServiceYears;

    if (noOfServiceYears <= 5)
        bonus = 10 * noOfServiceYears;
    else
        bonus = 20 * noOfServiceYears;

    cout << "Enter the total sale : ";
    cin >> totalSales;

    if(totalSales < 5000)
        additionalBonus = 0;
    else if (totalSales < 10000)
        additionalBonus = totalSales * 0.03;
    else 
        additionalBonus = totalSales * 0.06;
    
    payCheck = baseSalary + bonus + additionalBonus;

    cout << "So the paycheck of the employee is " << payCheck << endl; 
    return 0;
}