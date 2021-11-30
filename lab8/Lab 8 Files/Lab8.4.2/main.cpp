//Nick Krisulevicz
//Lab 8.4.2
//01/25/2021

#include <iostream>
using namespace std;

int main()
{
    int *numofids = nullptr;
    int *id = nullptr;
    int *searchnum = nullptr;
    int *checker = nullptr;
    int pos;

    numofids = new int;

    cout << "Enter the amount of id's to be read:" << endl;
    cin >> *numofids;

    id = new int[*numofids];
    searchnum = new int;
    checker = new int;

    for(pos = 0; pos < *numofids; pos++)
    {
        cout << "Enter an id number:";
        cin >> *(id + pos);
        cout << endl;
    }

    cout << "Here are the id numbers you entered:" << endl;

    for(pos = 0; pos < *numofids; pos++)
    {
        cout << *(id + pos) << endl;
    }

    cout << "Enter an id number to search:";
    cin >> *searchnum;
    for(pos = 0; pos < *numofids; pos++)
    {
        if(*(id + pos) == *searchnum)
        {
            *checker = 1;
        }
        else
        {
            *checker = 0;
        }
    }
    if(*checker == 1)
    {
        cout << "The number you searched is in the array." << endl;
    }
    else if(*checker == 0)
    {
        cout << "The number you searched is not in the array." << endl;
    }
    else
    {
        cout << "Invalid input." << endl;
    }

    return 0;
}
