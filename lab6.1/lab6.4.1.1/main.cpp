//Nick Krisulevicz
//Lab6.4.1.1
//10/30/2020

#include <iostream>
using namespace std;

void numswap(int&, int&);

int main()
{
    int num1;
    int num2;

    cout << "Enter an integer value:" << endl;
    cin >> num1;

    cout << "Enter a second integer number:" << endl;
    cin >> num2;

    cout << "You input " << num1 << " as the first integer and " << num2 << " as the second integer" << endl;
    numswap(num1, num2);

    return 0;
}

void numswap(int& x, int& y)
{
    int temp;
    temp = y;
    y = x;
    x = temp;
    cout << "After swapping, number 1 is " << x << " and number 2 is " << y << endl;
}
