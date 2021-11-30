//Nick Krisulevicz
//Lab3.5.1
//09/25/2020

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double grade1;
    double grade2;
    double grade3;
    double avg;
    cout << setprecision(2) << fixed;
    cout << "Please input the first grade" << endl;
    cin >> grade1;
    cout << endl;

    cout << "Please input the second grade" << endl;
    cin >> grade2;
    cout << endl;

    cout << "Please enter the third grade" << endl;
    cin >> grade3;
    cout << endl;

    avg = (grade1 + grade2 + grade3) / 3;
    cout << "The average of the three grades is " << avg << endl;

    return 0;
}
