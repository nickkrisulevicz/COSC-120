//Nick Krisulevicz
//Lab 6.1.2
//10/30/2020

#include <iostream>
#include <string>
using namespace std;

void writeProverb(string choice);

int main()
{
	string word;

	cout << "Given the phrase:" << endl;
	cout << "Now is the time for all good men to come to the aid of their ___"
		 << endl;

    cout << "Enter the last word of the proverb." << endl;

	writeProverb(word);
	cout << endl;

	return 0;
}

//	******************************************************************************
//	writeProverb
//
//	task:	  This function prints a proverb. The function takes a number
//	          from the call. If that number is a 1 it prints "Now is the time
//	          for all good men to come to the aid of their party."
//	          Otherwise, it prints "Now is the time for all good men
//	          to come to the aid of their country."
//	data in:  code for ending word of proverb (integer)
//	data out: no actual parameter altered
//
//	*****************************************************************************

void writeProverb(string wordchoice)
{
    cin >> wordchoice;
    cout << "Now is the time for all good men to come to the aid of their " << wordchoice;
}
