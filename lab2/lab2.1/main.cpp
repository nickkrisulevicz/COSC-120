//Nick Krisulevicz
//Lab 2.1
//09/18/2020

#include <iostream>
using namespace std;

int main()
{
    string firstname;
    string lastname;
    string streetnumber;
    string streetname;
    string streettype;
    string city;
    string state;
    string zipcode;
    string phonenumber;

	cout << "Enter your first and last names: " << endl;
	cin >> firstname >> lastname;

	cout << "Enter your street address: " << endl;
	cin >> streetnumber >> streetname >> streettype;

    cout << "Enter your city, state and zip code: " << endl;
    cin >> city >> state >> zipcode;

	cout << "Enter your telephone number: " << endl;
	cin >> phonenumber;

	cout << "Programmer: " << firstname << " " << lastname << endl;
	cout << "            " << streetnumber << " " << streetname << " " << streettype << endl;
	cout << "            " << city << " " << state << " " << zipcode << endl << endl << endl;
	cout << "Telephone:  " << phonenumber << endl;
	return 0;
}
