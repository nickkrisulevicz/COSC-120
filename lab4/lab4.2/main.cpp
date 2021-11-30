//Nick Krisulevicz
//Lab 4.2
//10/02/2020

#include <iostream>
using namespace std;

int main()
{
	float average;

	cout << "Input your average:" << endl;
	cin >> average;

	if (100.00 >= average && average >= 90.00){
		cout << "You got an A" << endl;
	}

	else if (89.00 >= average && average >= 80.00){
		cout << "You got a B" << endl;
    }

    else if (79.00 >= average && average >= 70.00){
		cout << "You got a C" << endl;
    }

    else if (69.00 >= average && average >= 0.00){
		cout << "You fail" << endl;
    }

    else {
        cout << "Invalid input" << endl;
    }

	return 0;
}
