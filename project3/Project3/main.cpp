//Nick Krisulevicz
//Project 3
//01/25/2021


#include <iostream>
#include <fstream>
#include <string>
#include "employee.h"
using namespace std;

const int DBSIZE = 10; // constant value to determine size of the database

int main()
{
    ofstream employeeFile; // creating object to use to manipulate file
    employeeFile.open("employee.db"); // opening the file where the database is stored

    if(employeeFile.is_open()) //quick check to see if file opened properly
    {
        cout << "File opened successfully." << endl;
    }
    else
    {
        cout << "Error opening file." << endl;
    }

    employeeFile << "First name, last name, SSN, gender, DOB, salary" << endl; //formatting the data file
    employeeFile << "----------------------------------------------------------" << endl;

    Employee employee; //creation of employee object which holds first and last names, SSN, gender, DOB and salary
    Employee employees[DBSIZE]; //creation of object array for employees

    string fn; //variables for inputting the traits of the employees before they are stored in the private members of the class
    string ln;
    string ssn;
    char g;
    string d;
    float s;

    int addnew; //variables used during the client section when prompting user to manipulate database
    char firesomeone;
    string firechoice;
    char fireconfirm;
    char modsomeone;
    string modchoice;
    char retsomeone;
    string retchoice;
    string searchfn;
    string searchln;
    char searchg;
    string searchd;
    float searchs;
    int counter = 1;

//--------------------------------------------


    cout << "How many employees do you want to add to the database? "; //prompting user to input how many employees to add
    cin >> addnew;
    cout << endl;

    if(addnew > 0)
    {
        for(int i = 0; i < addnew; i++) //for loop to add employee's information
        {
            cout << "Enter the employee's first name: ";
            cin >> fn; //input is temporarily stored in local variable
            employees[i].setFirstName(fn); //information is stored in private class member variables
            cout << endl;

            cout << "Enter the employee's last name: ";
            cin >> ln;
            employees[i].setLastName(ln);
            cout << endl;

            cout << "Enter the employee's nine digit social security number: ";
            cin >> ssn;
            employees[i].setSSN(ssn);
            cout << endl;

            cout << "Enter the employee's gender (M/F): ";
            cin >> g;
            employees[i].setGender(g);
            cout << endl;

            cout << "Enter the employee's date of birth (DD/MM/YYYY): ";
            cin >> d;
            employees[i].setDOB(d);
            cout << endl;

            cout << "Enter the employee's salary: $";
            cin >> s;
            employees[i].setSalary(s);
            cout << endl;

            employees[i].displayEmployeeInfo(); //prints to console the information just entered
            employeeFile << fn << " " << ln << " " << ssn << " " << g  << " " << d << " " << s << endl; //information is input to data file
            cout << endl;
        }
    }

    else if(addnew <= 0) //output if user declines to add employees
    {
        cout << "Okay bye." << endl;
    }

    else
    {
        cout << "Invalid input. " << endl;
    }

//-------------------------------------------------

    cout << "Do you want to modify any employee's data? (Y/N) "; //prompt to modify an employee's data
    cin >> modsomeone;
    cout << endl;

    if(modsomeone == 'Y' || modsomeone == 'y')
    {
        cout << "Enter the SSN of the employee you would like to modify: "; //user must input SSN of the employee they wish to edit
        cin >> modchoice;

        for(int k = 0; k < DBSIZE; k++)
        {
            if(modchoice == employees[k].getSSN()) //if the user enters correct SSN, they can edit all information about an employee
            {
                cout << "Please re-enter the employee's information" << endl;
                cout << "Enter the employee's first name: ";
                cin >> fn;
                employees[k].setFirstName(fn);
                cout << endl;

                cout << "Enter the employee's last name: ";
                cin >> ln;
                employees[k].setLastName(ln);
                cout << endl;

                cout << "Enter the employee's nine digit social security number: ";
                cin >> ssn;
                employees[k].setSSN(ssn);
                cout << endl;

                cout << "Enter the employee's gender (M/F): ";
                cin >> g;
                employees[k].setGender(g);
                cout << endl;

                cout << "Enter the employee's date of birth (DD/MM/YYYY): ";
                cin >> d;
                employees[k].setDOB(d);
                cout << endl;

                cout << "Enter the employee's salary: $";
                cin >> s;
                employees[k].setSalary(s);
                cout << endl;

                employees[k].displayEmployeeInfo(); //outputs changes to console
                employeeFile << fn << " " << ln << " " << ssn << " " << g  << " " << d << " " << s << endl; //outputs changes to data file
                cout << endl;
            }
        }
    }


//-----------------------------------------

    cout << "Do you want to delete any employees from the database? (Y/N) "; //prompt to fire employees
    cin >> firesomeone;
    cout << endl;

    if(firesomeone == 'Y' || firesomeone == 'y')
    {
        cout << "Enter the SSN of the employee you would like to fire: ";
        cin >> firechoice;

        for(int l = 0; l < DBSIZE; l++)
        {
            if(firechoice == employees[l].getSSN()) //once again, user must input SSN of employee they wish to change
            {
                cout << "Are you sure you want to fire this employee? (Y/N) "; //asking user for confirmation if they want to fire the employee
                cin >> fireconfirm;
                cout << endl;

                if(fireconfirm == 'Y' || fireconfirm == 'y')
                {
                    employees[l].fireEmployee(); //member function to fire the employee
                }
                else if(fireconfirm == 'N' || fireconfirm == 'n')
                {
                    cout << "This employee's job is safe, for now..." << endl; //output if user declines to fire employee
                }
                else
                {
                    cout << "Invalid input" << endl;
                }
                cout << endl;
            }
        }
    }

//------------------------------------------

    cout << "Do you want to retrieve an employee? (Y/N) "; // prompt to retrieve an employee by entering matching SSN
    cin >> retsomeone;
    cout << endl;
    if(retsomeone == 'Y' || retsomeone == 'y')
    {
        cout << "Enter the SSN of the employee you would like to retrieve: ";
        cin >> retchoice;

        for(int l = 0; l < DBSIZE; l++)
        {
            if(retchoice == employees[l].getSSN())
            {
                cout << "Enter a criteria to search an employee."; //the user can retrieve an employee by inputting their first or last names, gender, DOB or salary
                cin >> searchfn, searchln, searchg, searchd, searchs;
                if(searchfn == employees[l].getFirstName() || searchln == employees[l].getLastName() || searchg == employees[l].getGender() || searchd == employees[l].getDOB() || searchs == employees[l].getSalary())
                {
                    cout << "Here is the employee you retrieved." << endl; //output of retrieved employee to console
                    employees[l].displayEmployeeInfo(); //output of retrieved employee to data file
                    cout << endl;
                }
            }
        }
    }
    else if(retsomeone == 'N' || retsomeone == 'n')
    {
        cout << "Okay bye." << endl;
    }
    else
    {
        cout << "Invalid input." << endl;
    }
//-------------------------------------------


    employeeFile.close(); //closes the file at the conclusion of the program
    return 0;
}
