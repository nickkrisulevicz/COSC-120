//Nick Krisulevicz
//Lab 3.1
//09/25/2020

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string itemname;
	int	quantity;
	float itemPrice;
	float totalBill;
	cout << setprecision(2) << fixed << showpoint;

	cout << "Please input the name of the item purchased: " << endl;
	getline(cin, itemname);

	cout << "Please input the number of items bought" << endl;
    cin >> quantity;

    cout << "Please input the item's price: " << endl;
    cin >> itemPrice;

    totalBill = (itemPrice * quantity);
    cout << "The item you purchased is: " << itemname << endl;
    cout << "The total bill is: $" << totalBill << endl;

	return 0;
}
