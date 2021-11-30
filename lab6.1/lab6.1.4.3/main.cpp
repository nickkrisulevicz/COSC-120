//Nick Krisulevicz
//Lab 6.1.4.3
//01/30/2020

#include <iostream>
using namespace std;

double getgrades(int y);

int main()
{
    int numofgrades;
    double avg;

    cout << "Enter the number of grades recorded" << endl;
    cin >> numofgrades;

    avg = getgrades(numofgrades);

    if (avg > 90)
    {
        cout << "You got an A" << endl;
    }
    else if (avg >= 80 && avg <= 89.99)
    {
        cout << "you got a B" << endl;
    }
    else if (avg >= 70 && avg <= 79.99)
    {
        cout << "You got a C" << endl;
    }
    else if (avg >= 60 && avg <= 69.99)
    {
        cout << "You got a D" << endl;
    }
    else if (avg <= 60)
    {
        cout << "You failed the class" << endl;
    }
    else{
        cout << "invalid input" << endl;
    }

    return 0;
}

double getgrades(int y)
{
    double x;
    double total = 0;
    double average;
    for(int i = 0; i < y; i++)
    {
        cout << "Please enter a grade" << endl;
        cin >> x;
        total = total + x;
    }
    static_cast<double>(y);
    average = total / y;
    cout << "Average grade is " << average << endl;
    return average;
}
