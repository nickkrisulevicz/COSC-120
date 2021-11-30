#include "Employee.h"
#include <string>
#include <iostream>
using namespace std;

Employee::Employee()
{

}

Employee::Employee(std::string fn, std::string ln, std::string ssn, char g, std::string d, float s)
{
    setFirstName(fn);
    setLastName(ln);
    setSSN(ssn);
    setGender(g);
    setDOB(d);
    setSalary(s);
}

std::string Employee::getFirstName()
{
    return firstName;
}

std::string Employee::getLastName()
{
    return lastName;
}

std::string Employee::getSSN()
{
    return SSN;
}

char Employee::getGender()
{
    return gender;
}

std::string Employee::getDOB()
{
    return DOB;
}

float Employee::getSalary()
{
    return salary;
}

void Employee::setFirstName(std::string fn)
{
    firstName = fn;
}

void Employee::setLastName(std::string ln)
{
    lastName = ln;
}

void Employee::setSSN(std::string ssn)
{
    SSN = ssn;
}

void Employee::setGender(char g)
{
    gender = g;
}

void Employee::setDOB(std::string d)
{
    DOB = d;
}

void Employee::setSalary(float s)
{
    salary = s;
}

void Employee::displayEmployeeInfo()
{
    cout << firstName << " " << lastName << " " << SSN << " " << gender << " " << DOB << " " << salary << endl;
}

void Employee::fireEmployee()
{
    cout << "Employee information redacted - " << firstName << " " << lastName << " " << SSN << " " << gender << " " << DOB << " " << salary << endl;
}

