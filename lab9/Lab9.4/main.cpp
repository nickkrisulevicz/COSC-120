//Nick Krisulevicz
//Lab 9.4
//01/25/2021

#include <iostream>
#include <fstream>
using namespace std;

//declaration

const int NUMOFPROD = 10;

class Inventory
{
public:
	void getId(int item);

	void getAmount(int num);

	void display();

private:
	int	itemNumber;
	int	numOfItem;

};

//client

int main()
{
    Inventory inv;
	ifstream infile;
	infile.open("Inventory.dat");

	int products[NUMOFPROD];
	int stock[NUMOFPROD];

	int pos;
	int id;
	int total;

	while(!infile.eof())
    {
        for (pos = 0; pos < NUMOFPROD; pos++)
        {
            infile >> products[pos];
            infile >> stock[pos];

            id = products[pos];
            total = stock[pos];

            inv.getId(id);
            inv.getAmount(total);

            inv.display();
        }
    }

    infile.close();

	return 0;
}

//implementation

void Inventory::getId(int item)
{
    itemNumber = item;
}

void Inventory::getAmount(int num)
{
    numOfItem = num;
}

void Inventory::display()
{
    cout << "Item number " << itemNumber << " has " << numOfItem << " in stock." << endl;
}
