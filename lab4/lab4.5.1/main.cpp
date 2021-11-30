//Nick Krisulevicz
//Lab 4.5.1
//10/02/2020

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float q1;
    float q2;
    float q3;
    float q4;
    float avgbill;

    cout << fixed << setprecision(2) << showpoint;

    cout << "Please enter quarter 1 water bill:" << endl;
    cin >> q1;

    cout << "Please enter quarter 2 water bill:" << endl;
    cin >> q2;

    cout << "Please enter quarter 3 water bill:" << endl;
    cin >> q3;

    cout << "Please enter quarter 4 water bill:" << endl;
    cin >> q4;

    avgbill = (q1 + q2 + q3 + q4) / 4;
    cout << "Average yearly bill : $" << avgbill << endl;

    if (avgbill >= 25 && avgbill <= 75){
        cout << "A normal amount of water is being used.";
    }
    else if (avgbill > 75){
        cout << "An excessive amount of water is being used.";
    }
    else if (avgbill < 25){
        cout << "Commendation received for conserving water this year!";
    }
    return 0;
}
