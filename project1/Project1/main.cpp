//Nick Krisulevicz
//Project 1
//10/02/2020

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string> //
using namespace std;

const double rateunder15k = 0.10;
const double ratebetween15kand60kfirst = 0.10;
const double ratebetween15kand60ksecond = 0.15;
const double rateover60k = 0.33;
//These constants are for the commission rates
const double parttimenotenure = 0.00;
const double parttimetenure = 2500.00;
const double fulltimenotenure = 5000.00;
const double fulltimetenure = 10000.00;
//These constants are for the salaries rates
int main()
{
    int salesmen;
    string firstname;
    string lastname;
    string hours;
    string tenure;
    double salevalue;
    double commission;
    double commissionrate1;
    double commissionrate2;
    double salary;
    double avgcommission;
    double avgsalary;
    //These are all the variables used in the program

    cout << fixed << setprecision(2) << showpoint;
    //this statement ensures all operations with money display two floating point zeroes

    cout << "Enter the amount of salesmen who work for Pohanka." << endl;
    cin >> salesmen;
    //this statement prompts the user to input the number of salesmen the program will ask for details for.

    for (int i = 0;i < salesmen; i++){ //The for loop that runs for each salesman

        cout << "Enter the salesman's first name." << endl;
        cin >> firstname;
        //prompts the user to input the first name
        cout << "Enter the salesman's last name." << endl;
        cin >> lastname;
        //prompts the user to input last name
        cout << "Enter fulltime if the salesman works full time, and parttime if the salesman works part time" << endl;
        cin >> hours;
        //prompts user to input whether the salesman works full time or part time
        cout << "Enter fiveyears if the salesman has worked at least five years, and notfiveyears of the salesman has not worked five years." << endl;
        cin >> tenure;
        //prompts the user to input whether the salesman worked for more than five years or not
        if (hours == "parttime" && tenure == "notfiveyears"){
            salary = parttimenotenure;
        }
        else if (hours == "parttime" && tenure == "fiveyears"){
            salary = parttimetenure;
        }
        else if (hours == "fulltime" && tenure == "notfiveyears"){
            salary = fulltimenotenure;
        }
        else if (hours == "fulltime" && tenure == "fiveyears"){
            salary = fulltimetenure;
        }
        //the if/else statement series that determines the salary of the salesman based off two criteria, how much they work and how often they work
        cout << "Enter the value of the salesman's recent sale $";
        cin >> salevalue;
        cout << endl;
        //prompts the user to input the value of the salesman's most recent sale
        if (salevalue >= 15000){
            commission = salevalue * rateunder15k;
        }
        else if(salevalue >= 15001 && salevalue <= 60000){
            commissionrate1 = 15000 * ratebetween15kand60kfirst;
            commissionrate2 = (salevalue - 15000) * ratebetween15kand60ksecond;
            commission = commissionrate1 + commissionrate2;
        }
        else if (salevalue >= 60001){
            commission = salevalue * rateover60k;
        }
        else if (salevalue < 0){
            cout << "Enter a non-negative number" << endl;
        }
        //the if/else if statement series that determines the amount of commission dependent on the price of the sale and if it is within a certain range of money
        cout << "Salesman " << firstname << " " <<  lastname << " has earned $" << commission << " off a $" << salevalue << " sale and earned $" << salary << " this year." << endl;
        //the final output statement that displays the salesman's name, sale value, commission, and salary
        avgsalary = avgsalary + salary;
        avgcommission = avgcommission + commission;
    }
    avgsalary = avgsalary / salesmen;
    avgcommission = avgcommission / salesmen;
    //calculation statements to determine the final average salaries and commission
    cout << endl;
    cout << "The average salary is $" << avgsalary << endl;
    cout << "The average commission is $" << avgcommission << endl;
    //the final output statement for the calculated commissions and salaries
    return 0;
}
