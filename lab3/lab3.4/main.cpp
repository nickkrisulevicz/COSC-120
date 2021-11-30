//Nick Krisulevicz
//Lab 3.4
//09/25/2020

#include <iostream>
using namespace std;

const int AT_BAT = 421;
const int HITS = 123;

int main()
{
	double batAvg;

	batAvg = double(HITS) / double(AT_BAT);
	cout << "The batting average is " << batAvg << endl;

	return 0;
}
