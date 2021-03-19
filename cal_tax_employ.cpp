//caculate tax of employ using function
#include<iostream>
using namespace std;
double caltax(double income)
{
    double tax;
    if (income < 250000)
    {
        return 0;
    }
    else if(income>=250000 || income<=500000)
    {
        tax = (income * 5) / 100;
        return tax;
    }
    else if (income >=500000 ||income<=100000)
    {
        tax = (income * 20) / 100;
        return tax;
    }
    else if (income >100000)
    {
        tax = (income * 30) / 100;
        return tax;
    }
    return 0;
}
int main()
{
    double income,tax;
    cout << "Enter total income of Employ in digits. ";
    cin >> income;
    tax = caltax(income);
    cout << "you pay " << tax <<" Rs";
    return 0;
}