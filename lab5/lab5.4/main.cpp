//Nick Krisulevicz
//Lab 5.4
//10/09/2020

#include <iostream>
using namespace std;

int main()
{
	int numStudents;
	float numHours1, numHours2, total, average;
	int student, day = 0;
	int days;

	cout << "This program will find the average number of hours a day"
		 << " that a student spent programming over a long weekend\n\n";
	cout << "How many students are there ?" << endl << endl;
	cin >> numStudents;

	cout << "Enter the amount of days worked" << endl;
	cin >> days;

	for (student = 1; student <= days; student++)
	{
		total = 0;

		for (day = 1; day <= numStudents; day++)
		{
			cout << "Please enter the number of hours worked by student "
				 << student << " on day " << day << " in the subject of programming" << endl;
			cin >> numHours1;

			total = total + numHours1;
		}

        for (day = 1; day <= numStudents; day++)
		{
			cout << "Please enter the number of hours worked by student "
				 << student << " on day " << day << " in the subject of biology" << endl;
			cin >> numHours2;

			total = total + numHours2;
		}
		average = total / days;

		cout << endl;
		cout << "The average number of hours per day spent programming by "
			 << "student " << student << " is " << average
			 << endl << endl << endl;
	}

	return 0;
}
