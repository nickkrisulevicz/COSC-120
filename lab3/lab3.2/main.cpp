//Nick Krisulevicz
//Lab 3.2
//09/25/2020

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float price1, price2;
	int	quantity1, quantity2;

	cout << setprecision(2) << fixed << showpoint;

	cout << "Please input the price and quantity of the first item" << endl;
	cin >> price1 >> quantity1;

    cout << "Please input the price and quantity of the second item" << endl;
    cin >> price2 >> quantity2;

	cout << setw(15) << "PRICE" << setw(12) << "QUANTITY\n\n";

    cout << "The first price is " << price1 << " and the quantity is " << quantity1 << endl;
    cout << "The second price is " << price2 << " and the quantity is " << quantity2 << endl;

	return 0;
}
