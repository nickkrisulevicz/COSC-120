#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
using namespace std;

class Employee
{
    private:
        std::string firstName, lastName;
        std::string SSN;
        char gender;
        std::string DOB;
        float salary;

    public:
        // define contructors

        Employee();
        Employee(std::string fn, std::string ln, std::string ssn, char g, std::string d, float s);

        // define getter/setter for firstName, lastName, gender, salary

        std::string getFirstName();
        std::string getLastName();
        std::string getSSN();
        char getGender();
        std::string getDOB();
        float getSalary();
        void setFirstName(std::string fn);
        void setLastName(std::string ln);
        void setSSN(std::string ssn);
        void setGender(char g);
        void setDOB(std::string dob);
        void setSalary(float s);
        void displayEmployeeInfo();
        void fireEmployee();

};

#endif // EMPLOYEE_H
