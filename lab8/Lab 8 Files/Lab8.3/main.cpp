//Nick Krisulevicz
//Lab 8.3
//01/25/2021

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float *monthSales = nullptr;

	float total = 0;
	float average;
	int numOfSales;
	int count;

	cout << fixed << showpoint << setprecision(2);

	cout << "How many monthly sales will be processed? ";
	cin >> numOfSales;

	monthSales = new float[numOfSales];

	if (monthSales == nullptr)
	{
		cout << "Error allocating memory!\n";
		return 1;
	}

	cout << "Enter the sales below\n";

	for (count = 0; count < numOfSales; count++)
	{
		cout << "Sales for Month number	"
		     << count + 1
		     << ":";
        cin >> *(monthSales + count);
	}

	for (count = 0; count < numOfSales; count++)
	{
		total = total + monthSales[count];
	}

	average = total / numOfSales;

	cout << "Average Monthly sale is $" << average << endl;

	delete [] monthSales;

	return 0;
}
