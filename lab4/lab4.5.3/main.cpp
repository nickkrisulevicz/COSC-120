//Nick Krisulevicz
//Lab 4.5.3
//10/02/2020

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const int INSTATETUITION = 3000;
const int OUTSTATETUITION = 4500;
const int HOUSEINSTATE = 2500;
const int HOUSEOUTSTATE = 3500;

int main()
{
    char state;
    char housing;
    int tuition;

    cout << "Please input 'y' if you are from in-state and 'n' if you are from out of state." << endl;
    cin >> state;

    cout << "Please input 'y' if you require on campus room and board and 'n' if you do not." << endl;
    cin >> housing;

    if (state == 'y' && housing == 'y'){
        tuition = INSTATETUITION + HOUSEINSTATE;
        cout << "Your cost for this semester is: $" << tuition << endl;
    }
    else if (state == 'y' && housing == 'n'){
        tuition = INSTATETUITION + 0;
        cout << "Your cost for this semester is $" << tuition << endl;
    }
    else if (state == 'n' && housing == 'y'){
        tuition = OUTSTATETUITION + HOUSEOUTSTATE;
        cout << "Your cost for this semester is $" << tuition << endl;
    }
    else if (state == 'n' && housing == 'n') {
        tuition = OUTSTATETUITION + 0;
        cout << "Your cost for this semester is $" << tuition << endl;
    }
    else {
        cout << "Please enter 'y' or 'n' for the prompts.";
    }

    return 0;
}
