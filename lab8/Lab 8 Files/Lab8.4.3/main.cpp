//Nick Krisulevicz
//Lab 8.4.3
//01/25/2021

#include <iostream>
#include <iomanip>
using namespace std;

double yearlysum(double array[], int size);
double yearlyavg(double array[], int size);

int main()
{
    cout << fixed << setprecision(2) << showpoint;

    int *numofsales = nullptr;
    double *sales = nullptr;
    int pos;

    numofsales = new int;

    cout << "Please enter the number of monthly sales for this year.";
    cin >> *numofsales;
    cout << endl;

    sales = new double;

    for(pos = 0; pos < *numofsales; pos++)
    {
        cout << "Day " << (pos + 1) << ": $";
        cin >> *(sales + pos);
        cout << endl;
    }

    for(pos = 0; pos < *numofsales; pos++)
    {
        cout << "Day " << (pos + 1) << ": $" << *(sales + pos) << endl;
    }

    cout << "Yearly total sales is: $" << yearlysum(sales, *numofsales) << endl;
    cout << "Yearly average sales are: $" << yearlyavg(sales, *numofsales) << endl;

    return 0;
}

double yearlysum(double array[], int size)
{
    double total;
    for(int i = 0; i < size; i++)
    {
        total += array[i];
    }
    return total;
}

double yearlyavg(double array[], int size)
{
    double total;
    for(int j = 0; j < size; j++)
    {
        total += array[j];
    }
    double average = total / size;
    return average;
}
