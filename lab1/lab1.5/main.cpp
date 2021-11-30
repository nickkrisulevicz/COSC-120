//Nick Krisulevicz
//Lab 1.5
//09/11/2020

#include <iostream>
using namespace std;

int main()
{
    float kilo = 0;
    float miles = 0;
    cout << "This program will convert kilometers to miles." << endl;
    cout << "Enter kilometers travelled: " << endl;
    cin >> kilo;
    miles = kilo * 0.621;
    cout << "Miles travelled: " << miles;
    return 0;
}
