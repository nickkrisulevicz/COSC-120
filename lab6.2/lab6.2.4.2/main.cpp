//Nick Krisulevicz
//Lab 6.2.4.2
//11/06/2020

#include <iostream>
#include <iomanip>
using namespace std;

double getWinPercentage(int wins, int losses);

int main()
{
    int wins;
    int losses;
    double winpercentage;
    cout << setprecision(3) << fixed << showpoint << endl;

    cout << "Enter the amount of wins the team has on the season." << endl;
    cin >> wins;

    cout << "Enter the amount of losses the team has on the season." << endl;
    cin >> losses;

    winpercentage = getWinPercentage(wins, losses);
    cout << "The team has a win percentage of %" << winpercentage << endl;

    return 0;
}

double getWinPercentage(int wins, int losses)
{
    double total = wins + losses;
    double average = wins / total;
    return average;
}
