//Nick Krisulevicz
//Lab 6.2.3
//11/06/2020

#include <iostream>
#include <iomanip>
using namespace std;

const double CONVERTEURO = 1.06;
const double CONVERTPESO = 9.73;
const double CONVERTYEN = 124.35;

void convertMulti(float dollars, float& euros, float& pesos);
void convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);

int main()
{
	float dollars;
	float euros;
	float pesos;
	float yen;

	cout << fixed << showpoint << setprecision(2);

	cout << "Please input the amount of American Dollars you want converted "
		 << endl;
	cout << "to euros and pesos" << endl;
	cin >> dollars;

    convertMulti(dollars, euros, pesos);

	cout << "$" << dollars << " converts into " << euros << " euros and " << pesos << " pesos." << endl << endl;

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to euros, pesos and yen" << endl;
	cin >> dollars;

    convertMulti(dollars, euros, pesos, yen);

    cout << "$" << dollars << " converts into " << euros << " euros, " << pesos << "pesos, and " << yen << " yen." << endl << endl;
	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to yen" << endl;
	cin >> dollars;

    yen = convertToYen(dollars);
    cout << "$" << dollars << " converts into " << yen << " yen." << endl << endl;

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to euros" << endl;
	cin >> dollars;

    euros = convertToEuros(dollars);
    cout << "$" << dollars << " converts into " << euros << " euros." << endl << endl;

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to pesos " << endl;
	cin >> dollars;

    pesos = convertToPesos(dollars);
    cout << "$" << dollars << " converts into " << pesos << " pesos." << endl << endl;

	return 0;
}

//	**************************************************************************
//	convertMulti
//
//	task:	  This function takes a dollar value and converts it to euros
//	          and pesos
//	data in:  dollars
//	data out: euros and pesos
//
//	*************************************************************************

void convertMulti(float dollars, float& euros, float& pesos)
{
	cout << "The function convertMulti with dollars, euros and pesos "
		 << endl << " was called with " << dollars << " dollars" << endl << endl;
    euros = dollars * CONVERTEURO;
    pesos = dollars * CONVERTPESO;
}

//	************************************************************************
//	convertMulti
//
//	task:	  This function takes a dollar value and converts it to euros
//	          pesos and yen
//	data in:  dollars
//	data out: euros pesos yen
//
//	***********************************************************************

void convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
	cout << "The function convertMulti with dollars, euros, pesos and yen"
		 << endl << " was called with " << dollars << " dollars" << endl << endl;
    euros = dollars * CONVERTEURO;
    pesos = dollars * CONVERTPESO;
    yen = dollars * CONVERTYEN;
}

//	****************************************************************************
//	convertToYen
//
//	task:	       This function takes a dollar value and converts it to yen
//	data in:	   dollars
//	data returned: yen
//
//	***************************************************************************

float convertToYen(float dollars)
{
	cout << "The function convertToYen was called with " << dollars << " dollars"
		 << endl << endl;
    float yen = dollars * CONVERTYEN;
	return yen;
}

//	****************************************************************************
//	convertToEuros
//
//	task:	       This function takes a dollar value and converts it to euros
//	data in:	   dollars
//	data returned: euros
//
//	****************************************************************************

float convertToEuros(float dollars)
{
	cout << "The function convertToEuros was called with " << dollars
		 << " dollars" << endl << endl;
    float euros = dollars * CONVERTEURO;
	return 0;
}

//	*****************************************************************************
//	convertToPesos
//
//	task:	       This function takes a dollar value and converts it to pesos
//	data in:	   dollars
//	data returned: pesos
//
//	****************************************************************************

float convertToPesos(float dollars)
{
	cout << "The function convertToPesos was called with " << dollars
		 << " dollars" << endl;
    float pesos = dollars * CONVERTPESO;
	return pesos;
}
