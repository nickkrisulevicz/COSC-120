//Nick Krisulevicz
//Lab 5.5
//10/09/2020

#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	ifstream dataIn;	// defines an input stream for a data file
	ofstream dataOut;	// defines an output stream for an output file
	int quantity;		// contains the amount of items purchased
	float itemPrice;	// contains the price of each item
	float	totalBill;	// contains the total bill, i.e. the price of all items

	dataIn.open("transaction.dat");	// This opens the file.
	dataOut.open("bill.out");

	// Fill in the appropriate code in the blank below

	dataOut << setprecision(2) << fixed << showpoint;	// formatted output

    dataIn >> quantity >> itemPrice >> totalBill;

	// Fill in the input statement that brings in the
	// quantity and price of the item
	quantity = 22;
	itemPrice = 10.98;
    totalBill = itemPrice * quantity;
	// Fill in the assignment statement that determines the total bill.
    dataOut << "Total bill is $" << totalBill;
	// Fill in the output statement that prints the total bill, with a label,
	// to an output file
	cout << "Total bill is $" << totalBill;

	return 0;
}
