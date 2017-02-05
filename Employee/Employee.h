/*
 * AMY JIANG
 * 1 DECEMBER 2016
 * CS/IS 135
 * TUESDAY NIGHT CLASS
 * Homework 7 PART 1
 * HEADER FILE
 * Employee.h
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
    private:
        string name;
        string idNumber;
        string department;
        string position;
        int yearsWorked;
    
    public: //function prototypes
    
        Employee();
        Employee(string, string, string, string, int);
        Employee(string, string);
    
        void setName(string);
        void setIdNumber(string);
        void setDepartment(string);
        void setPosition(string);
        bool setYearsWorked(int);
    
        string getName() const;
        string getIdNumber() const;
        string getDepartment() const;
        string getPosition() const;
        int getYearsWorked() const;
};

#endif

