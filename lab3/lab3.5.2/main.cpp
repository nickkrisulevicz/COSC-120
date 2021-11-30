//Nick Krisulevicz
//Lab 3.5.2
//09/25/2020

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int ac;
    int mo;
    int fc;

    cout << "Please input the amount of American Colonial chairs sold" << endl;
    cin >> ac;
    cout << endl;

    cout << "Please input the amount of Modern chairs sold" << endl;
    cin >> mo;
    cout << endl;

    cout << "Please input the amount of French Classical chairs sold" << endl;
    cin >> fc;
    cout << endl;

    cout << setprecision(2) << fixed;
    double salesac = ac * 85.00;
    double salesmo = mo * 57.50;
    double salesfc = fc * 127.75;
    double totalsales = salesac + salesmo + salesfc;

    cout << "Total American Colonial sales: $" << salesac << endl;
    cout << "Total Modern sales: $" << salesmo << endl;
    cout << "Total French Classical sales: $" << salesfc << endl;
    cout << "Total sales: $" << totalsales << endl;

    return 0;
}
