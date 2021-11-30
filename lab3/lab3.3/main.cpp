//Nick Krisulevicz
//Lab 3.3
//09/25/2020

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	float a, b;
	float hyp;

    cout << setprecision(2) << fixed << showpoint;

	cout << "Please input the value of the two sides" << endl;
	cin >> a >> b;

    hyp = sqrt((a*a) + (b*b));

	cout << "The sides of the right triangle are " << a << " and " << b << endl;
	cout << "The hypotenuse is " << hyp << endl;

	return 0;
}
