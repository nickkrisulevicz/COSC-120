//Nick Krisulevicz
//Lab 3.5.3
//09/25/2020

#include <iostream>
using namespace std;

int main()
{
    double sales;
    double state;
    double local;

    cout << "Please input total sales for the month" << endl;
    cin >> sales;
    cout << endl;

    cout << "Input state tax in decimal form (.02 for 2%)" << endl;
    cin >> state;
    cout <<endl;

    cout << "Input local tax in decimal form (.02 for 2%)" << endl;
    cin >> local;
    cout << endl;

    double statetax = sales * state;
    double localtax = sales * local;

    cout << "Total sales for the month: $" << sales << endl;
    cout << "State tax for the month is: $" << statetax << endl;
    cout << "The local tax for the month is: $" << localtax << endl;

    return 0;
}
