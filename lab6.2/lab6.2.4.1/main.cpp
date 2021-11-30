//Nick Krisulevicz
//Lab 6.2.4.1
//11/06/2020

#include <iostream>
using namespace std;

const double KILOTOMILES = 0.621;
const double MILESTOKILO = 1.61;

double KilometersToMiles(double kilometers, double& miles);
double MilesToKilometers(double miles, double& kilometers);

int main()
{
    double miles;
    double kilometers;
    int choice = 0;;

    cout << "Enter 1 to convert miles to kilometers." << endl;
    cout << "Enter 2 to convert kilometers to miles." << endl;
    cout << "Enter 3 to quit" << endl;
    cin >> choice;

    while(choice != 3)
    {
        if (choice == 1)
        {
            cout << "Enter amount of miles travelled." << endl;
            cin >> miles;
            kilometers  = MilesToKilometers(miles, kilometers);
            cout << "You travelled " << kilometers << " kilometers." << endl << endl;
            cout << "Enter 1 to convert miles to kilometers." << endl;
            cout << "Enter 2 to convert kilometers to miles." << endl;
            cout << "Enter 3 to quit" << endl;
            cin >> choice;
        }
        else if (choice == 2)
        {
            cout << "Enter amount of kilometers travelled." << endl;
            cin >> kilometers;
            miles = KilometersToMiles(kilometers, miles);
            cout << "You travelled " << miles << " miles." << endl << endl;
            cout << "Enter 1 to convert miles to kilometers." << endl;
            cout << "Enter 2 to convert kilometers to miles." << endl;
            cout << "Enter 3 to quit" << endl;
            cin >> choice;
        }
        else if (choice == 3)
        {
            break;
        }
        else
        {
            cout << "Invalid input." << endl << endl;
            cout << "Enter 1 to convert miles to kilometers." << endl;
            cout << "Enter 2 to convert kilometers to miles." << endl;
            cout << "Enter 3 to quit" << endl;
            cin >> choice;
        }
    }

    return 0;
}

double KilometersToMiles(double kilometers, double& miles)
{
    miles = kilometers * KILOTOMILES;
    return miles;
}

double MilesToKilometers(double miles, double& kilometers)
{
    kilometers = miles * MILESTOKILO;
    return kilometers;
}
