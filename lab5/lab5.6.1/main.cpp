//Nick Krisulevicz
//Lab 5.6.1
//10/09/2020

#include <iostream>
using namespace std;

int main()
{
    int choice;
    int coffee = 0;
    int tea = 0;
    int coke = 0;
    int juice = 0;

    do{
        cout << "Enter your favorite beverage" << endl;
        cout << "1 for coffee. 2 for tea. 3 for coke. 4 for orange juice" << endl;

        cin >> choice;

        if (choice == 1)
            coffee = coffee + 1;
        if (choice == 2)
            tea == tea + 1;
        if (choice == 3)
            coke = coke + 1;
        if (choice == 4)
            juice = juice + 1;
    }
    while (choice != -1);
    cout << "People who like coffee: " << coffee << endl;
    cout << "People who like tea: " << tea << endl;
    cout << "People who like coke: " << coke << endl;
    cout << "People who like orange juice: " << juice << endl;
    return 0;
}
