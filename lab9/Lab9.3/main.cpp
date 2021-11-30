//Nick Krisulevicz
//Lab 9.3
//01/25/2021

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int MAX_LENGTH = 50;
class FloatList

{
public:
	void getList(ifstream&);
	void printList() const;

    void listAverage();

	FloatList();
	~FloatList();

private:
	int length;
	float values[MAX_LENGTH];

};

int main()
{
	ifstream tempData;

	FloatList templist;

	cout << fixed << showpoint;

	cout << setprecision(2);

	tempData.open("temperatures.txt");

	templist.getList(tempData);
	templist.printList();
	templist.listAverage();

	return 0;
}

FloatList::FloatList()
{
    length = 0;
}

void FloatList::getList(ifstream& tempData)
{
    while(!tempData.eof())
    {
        for (int i = 0; i < 5; i++)
        {
            tempData >> values[i];
        }
    }
}

void FloatList::printList() const
{
    for(int j = 0; j < 5; j++)
    {
        cout << values[j] << endl;
    }
}

void FloatList::listAverage()
{
    float total = 0;
    for(int k = 0; k < 5; k++)
    {
        total += values[k];
    }
    float average = total / 5;
    cout << "Average temperature is " << average << endl;
}

FloatList::~FloatList()
{
    cout << "Destructor has been activated" << endl;
}
