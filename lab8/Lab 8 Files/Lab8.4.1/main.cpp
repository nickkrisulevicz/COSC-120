//Nick Krisulevicz
//Lab 8.4.1
//01/25/2021

#include <iostream>
using namespace std;

void swapnum(int &a, int&b);
void bubblesort(int array[], int size);


int main()
{
    int *numofgrades = nullptr;
    int *grades = nullptr;
    int *total = nullptr;
    double *average = nullptr;
    int pos;

    numofgrades = new int;

    cout << "Enter the amount of grades:";
    cin >> *numofgrades;
    cout << endl;

    grades = new int[*numofgrades];
    total = new int;
    average = new double;

    *total = 0;

    for(pos = 0; pos < *numofgrades; pos++)
    {
        cout << "Enter a grade" << endl;
        cin >> *(grades + pos);
        *total += *grades;
        cout << endl;
    }

    *average = *total / *numofgrades;
    bubblesort(grades, *numofgrades);

    cout << "Average grade is: " << *average << endl;
    cout << "Here are the grades in ascending order:" << endl;

    for(pos = 0; pos < *numofgrades; pos++)
    {
        cout << *(grades + pos) << endl;
    }

    delete numofgrades;
    delete grades;
    delete total;
    delete average;

    return 0;
}


void swapnum(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}


void bubblesort(int numarray[], int numsize)
{
    int maxelement;
    int index;
    for(maxelement = numsize - 1; maxelement > 0; maxelement--)
    {
        for(index = 0; index < maxelement; index++)
        {
            if(numarray[index] > numarray[index + 1])
            {
                swapnum(numarray[index], numarray[index + 1]);
            }
        }
    }
}
