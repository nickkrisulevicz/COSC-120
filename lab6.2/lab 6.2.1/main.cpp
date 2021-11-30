//Nick Krisulevicz
//Lab 6.2.1
//11/06/2020

#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14;
const double RATE = 0.25;

void findArea(float, float&);
void findCircumference(float, float&);

int main()
{
	cout << fixed << showpoint << setprecision(2);
	float radius = 12;

	cout << " Main function outer block" << endl;
	cout << " PI and radius are active here" << endl << endl;

	{
		float area;

		cout << "Main function first inner block" << endl;
		cout << "Radius and area are active here" << endl << endl;

		findArea(radius, area);

		cout << "The radius = " << radius << endl;
		cout << "The area = " << area << endl << endl;
	}

	{
		float radius = 10;
		float circumference;

		cout << "Main function second inner block" << endl;
		cout << "Radius and circumference are active here" << endl << endl;

		findCircumference(radius, circumference);

		cout << "The radius = " << radius << endl;
		cout << "The circumference = " << circumference << endl << endl;
	}

	cout << "Main function after all the calls" << endl;
	cout << "Radius is active here" << endl << endl;

	return 0;
}

//	*********************************************************************
//	findArea
//
//	task:	  This function finds the area of a circle given its radius
//	data in:  radius of a circle
//	data out: answer (which alters the corresponding actual parameter)
//
//	********************************************************************

void findArea(float rad, float& answer)
{
	cout << "AREA FUNCTION" << endl << endl;
	cout << "Radius and PI are active here" << endl << endl;
    answer = PI * (rad * rad);
}

//	******************************************************************************
//	findCircumference
//
//	task:	  This function finds the circumference of a circle given its radius
//	data in:  radius of a circle
//	data out: distance (which alters the corresponding actual parameter)
//
//	*****************************************************************************

void findCircumference(float length, float& distance)
{
	cout << "CIRCUMFERENCE FUNCTION" << endl << endl;
	cout << "PI and radius are active here" << endl << endl;
    distance = 2 * (PI * length);
}
