//Nick Krisulevicz
//Lab 6.2.4.3
//11/06/2020

#include <iostream>
#include <iomanip>
using namespace std;

double getTotalBill(double service, double test, double medicine);
double getTotalBill(double service, double test);

int main()
{
    int plan = 0;
    double service;
    double test;
    double medicine;
    double totalbill;
    cout << setprecision(2) << fixed << showpoint << endl;

    cout << "Enter 1 if you are a member of the dental plan." << endl;
    cout << "Enter any other number if you are not a member of the dental plan." << endl;
    cin >> plan;

    cout << "Enter the amount for the service charge." << endl;
    cin >> service;

    cout << "Enter the amount for the test charge." << endl;
    cin >> test;

    if (plan == 1)
    {
        totalbill = getTotalBill(service, test);
        cout << "Total bill is $" << totalbill << endl;
    }
    else
    {
        cout << "Enter the amount for the medicine charge." << endl;
        cin >> medicine;
        totalbill = getTotalBill(service, test, medicine);
        cout << "Total bill is $" << totalbill << endl;
    }

    return 0;
}

double getTotalBill(double service, double test, double medicine)
{
    double total = service + test + medicine;
    return total;
}

double getTotalBill(double service, double test)
{
    double total = service + test;
    return total;
}
