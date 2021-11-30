//Nick Krisulevicz
//Lab 9.5
//01/25/2021

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//declaration

class SavingsAccount
{
    private:
        int dollars;
        int cents;
    public:
        SavingsAccount(int d, int c);
        SavingsAccount();
        char openAccount(char choice);
        void deposit();
        void withdrawal();
        void showBalance();
};

//client

int main()
{
    cout << fixed << setprecision(2) << showpoint;

    char decision1;
    string decision2;
    int doll = 0;
    int cent = 0;
    cout << "Would you like to open a bank account? (Y/N) ";
    cin >> decision1;

    cout << "Please enter principal value of dollars: ";
    cin >> doll;
    cout << endl;

    cout << "Please enter principal value of cents: ";
    cin >> cent;
    cout << endl;

    SavingsAccount bank1(doll, cent);
    SavingsAccount bank2;

    if(decision1 == 'Y' || decision1 == 'y')
    {
        bank1.openAccount(decision1);
        bank2.openAccount(decision1);
        cout << "Would you like to deposit or withdraw? ";
        cin >> decision2;
        cout << endl;
        if(decision2 == "Deposit" || decision2 == "deposit")
        {
            cout << "Bank account 1" << endl;
            bank1.deposit();
            cout << "Bank account 2 (default constructor)" << endl;
            bank2.deposit();
            cout << "Bank account 1" << endl;
            bank1.showBalance();
            cout << "Bank account 2 (default constructor)" << endl;
            bank2.showBalance();
        }
        else if(decision2 == "Withdraw" || decision2 == "withdraw")
        {
            cout << "Bank account 1" << endl;
            bank1.withdrawal();
            cout << "Bank account 2 (default constructor)" << endl;
            bank2.withdrawal();
            cout << "Bank account 1" << endl;
            bank1.showBalance();
            cout << "Bank account 2 (default constructor)" << endl;
            bank2.showBalance();
        }
    }
    else
    {
        cout << "Okay bye." << endl;
    }

    cout << "Would you like to perform another deposit or withdrawal? (Y/N) ";
    cin >> decision1;
    cout << endl;

    if(decision1 == 'Y' || decision1 == 'y')
    {
        cout << "Would you like to deposit or withdraw? ";
        cin >> decision2;
        cout << endl;
        if(decision2 == "Deposit" || decision2 == "deposit")
        {
            cout << "Bank account 1" << endl;
            bank1.deposit();
            cout << "Bank account 2 (default constructor)" << endl;
            bank2.deposit();
            cout << "Bank account 1" << endl;
            bank1.showBalance();
            cout << "Bank account 2 (default constructor)" << endl;
            bank2.showBalance();
        }
        else if(decision2 == "Withdraw" || decision2 == "withdraw")
        {
            cout << "Bank account 1" << endl;
            bank1.withdrawal();
            cout << "Bank account 2 (default constructor)" << endl;
            bank2.withdrawal();
            cout << "Bank account 1" << endl;
            bank1.showBalance();
            cout << "Bank account 2 (default constructor)" << endl;
            bank2.showBalance();
        }
    }
    else
    {
        cout << "Okay bye." << endl;
    }




    return 0;
}

//implementation

char SavingsAccount::openAccount(char choice)
{
    dollars = 0;
    cents = 0;
}

void SavingsAccount::deposit()
{
    int dollaradd;
    int centadd;
    cout << "Enter amount of dollars to deposit: ";
    cin >> dollaradd;
    cout << endl;

    cout << "Enter amount of cents to deposit: ";
    cin >> centadd;
    cout << endl;

    dollars += dollaradd;
    cents += centadd;
    if(cents >= 100)
    {
        dollars += 1;
        cents -=100;
    }
}

void SavingsAccount::withdrawal()
{
    int dollarsub;
    int centsub;
    cout << "Enter amount of dollars to withdraw: ";
    cin >> dollarsub;
    cout << endl;

    cout << "Enter amount of cents to withdraw: ";
    cin >> centsub;
    cout << endl;

    if(cents < 0)
    {
        dollars -= 1;
        cents +=100;
    }
}

void SavingsAccount::showBalance()
{
    if(cents <= 10)
    {
        cout << "Your current balance is: $" << dollars << ".0" << cents << endl;
    }
    else
    {
        cout << "Your current balance is: $" << dollars << "." << cents << endl;
    }
}

SavingsAccount::SavingsAccount()
{
    dollars = 0;
    cents = 0;
}

SavingsAccount::SavingsAccount(int d, int c)
{
    dollars = d;
    cents = c;
}
