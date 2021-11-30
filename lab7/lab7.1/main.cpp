//Nick Krisulevicz
//Lab 7.1
//11/20/2020

// This program will read in a group of test scores (positive integers from 1 to 100)
// from the keyboard and then calculate and output the average score
// as well as the highest and lowest score. There will be a maximum of 100 scores.

// PLACE YOUR NAME HERE

#include <iostream>
#include <fstream>
using namespace std;

typedef int GradeType[100];		// declares a new data type:
								// an integer array of 100 elements

float findAverage(const GradeType, int);	// finds average of all grades
int  findHighest(const GradeType, int);		// finds highest of all grades
int  findLowest(const GradeType, int);		// finds lowest of all grades

int main()
{
    ifstream datain;
    datain.open("grades.txt");
	GradeType grades;	// the array holding the grades.
	int numberOfGrades;	// the number of grades read.
	int pos;			// index to the array.
	float avgOfGrades;	// contains the average of the grades.
	int highestGrade;	// contains the highest grade.
	int lowestGrade;	// contains the lowest grade.

	pos = 0;
    numberOfGrades = 0;
	while (!datain.eof())
	{
	    for (int i = 0; i < 100; i++)
        {
            datain >> grades[i];
            cout << grades[pos];
            numberOfGrades++;
        }
	}

    // Fill blank with appropriate identifier
    cout << endl << "The amount of grades is " << numberOfGrades << endl;

	// call to the function to find average
	avgOfGrades = findAverage(grades, numberOfGrades);

	cout << endl << "The average of all the grades is " << avgOfGrades << endl;

	// Fill in the call to the function that calculates highest grade
	highestGrade = findHighest(grades, numberOfGrades);

	cout << endl << "The highest grade is " << highestGrade << endl;

	lowestGrade = findLowest(grades, numberOfGrades);

	cout << "The lowest grade is " << lowestGrade << endl;

	// Fill in the call to the function that calculates lowest grade
	// Fill in code to write the lowest to the screen

	return 0;
}

float findAverage(const GradeType	array, int size)
{
	float sum = 0;

	for (int pos = 0; pos < size; pos++)
		sum = sum + array[pos];

	return (sum / size);
}


int	findHighest(const GradeType array, int size)
{
	int high = 0;
	for (int i = 0; i < size; i++)
    {
        if (array[i] > high)
            high = array[i];
    }
    return high;
}


int	findLowest(const GradeType array, int size)
{
    int low = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < low)
            low = array[i];
    }
	return low;
}
