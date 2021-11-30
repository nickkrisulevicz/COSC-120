//Nick Krisulevicz
//Lab 4.5.2
//10/02/2020

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double DISCOUNT1 = 0.10;
const double DISCOUNT2 = 0.15;
const double DISCOUNT3 = 0.20;
const double DISCOUNT4 = 0.25;
const double PRICE = 12.00;

int main()
{
    int shirts;
    double cost;
    double discount;
    double total;

    cout << fixed << setprecision(2) << showpoint;

    cout << "Enter the amount of shirts purchased:" << endl;
    cin >> shirts;

    if (shirts > 5 && shirts < 10){
        cost = (shirts * PRICE);
        discount = (cost * DISCOUNT1);
        total = (cost - discount);
        cout << "You bought " << shirts << " shirts. Your total is $" << total;
    }
    else if (shirts > 11 && shirts < 20){
        cost = (shirts * PRICE);
        discount = (cost * DISCOUNT2);
        total = (cost - discount);
        cout << "You bought " << shirts << " shirts. Your total is $" << total;
    }
    else if (shirts > 21 && shirts < 30){
        cost = (shirts * PRICE);
        discount = (cost * DISCOUNT3);
        total = (cost - discount);
        cout << "You bought " << shirts << " shirts. Your total is $" << total;
    }
    else if (shirts > 31){
        cost = (shirts * PRICE);
        discount = (cost * DISCOUNT4);
        total = (cost - discount);
        cout << "You bought " << shirts << " shirts. Your total is $" << total;
    }
    else if (shirts < 5){
        cost = (shirts * PRICE);
        cout << "You bought " << shirts << " shirts. Your total is $" << cost;
    }
    else {
        cout << "Please enter a nonnegative number" << endl;
    }

    return 0;
}
