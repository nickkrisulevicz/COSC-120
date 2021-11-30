//Nick Krisulevicz
//Lab 5.1
// 10/09/2020

#include <iostream>
using namespace std;

int main()
{
	char letter = 'a';
	cout << "This program will prompt you to enter a letter and repeat. The process will end when 'x' is entered. \n";

    do{
        cout << "Please enter a letter" << endl;
		cin >> letter;

		cout << "The letter you entered is " << letter << endl;
    }
	while (letter != 'x');

	return 0;
}
