//Nick Krisulevicz
//Lab 6.4.1.2
//10/30/2020

#include <iostream>
#include <iomanip>
using namespace std;

double calculatespeed(double& x, double& y);

int main()
{
    double miles;
    double hours;
    double mph;

    cout << setprecision(2) << fixed << showpoint << endl;

    cout << "Enter the amount of miles travelled." << endl;
    cin >> miles;

    cout << "Enter the amount of hours travelled" << endl;
    cin >> hours;

    mph = calculatespeed(miles, hours);
    cout << "You travelled " << mph << " miles per hour." << endl;

    return 0;
}

double calculatespeed(double& x, double& y)
{
    double speed;
    speed = x / y;
    return speed;
}
