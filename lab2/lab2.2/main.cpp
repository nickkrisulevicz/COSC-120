//Nick Krisulevicz
//Lab 2.2
//09/18/2020

#include <iostream>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

int main()
{
	double area;
	double circumference;
	circumference = 2 * PI * RADIUS;
	area = PI * RADIUS * RADIUS;

    circumference = 2 * PI * RADIUS;
    cout << "Circumference is: " << circumference << endl;

	area = PI * RADIUS * RADIUS;
	cout << "Area is: " << area;

	return 0;
}
