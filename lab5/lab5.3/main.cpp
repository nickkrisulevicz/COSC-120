//Nick Krisulevicz
//Lab 5.3
//10/09/2020

#include <iostream>
using namespace std;

int main()
{
	int value1;
	int value2;
	int value3;
	int total = 0;
	int number;
	float mean;

	cout << "Please enter a positive integer" << endl;
	cin >> value1;

	cout << "Please enter a positive integer greater than the first one" << endl;
	cin >> value2;

	value3 = value2 - value1;

	if (value1 > 0)
	{
		for (number = value1; number <= value2; number++)
		{
			total = total + number;
		}

		mean = static_cast<float>(total) / (value3);

		cout << "The mean average of integers between " << value1 << " and " << value2 << " is " << mean << endl;
	}

	else
		cout << "Invalid input" << endl;

	return 0;
}
