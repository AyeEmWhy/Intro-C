/* File Employee.ccp --- Function Implementation File
 * FUNCTION IMPLENTATION FILE
 *
 * AMY JIANG
 * 1 DECEMBER 2016
 * CS/IS 135
 * TUESDAY NIGHT CLASS
 *
 */

#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;

/* EMPLOYEE MEMBER FUNCTIONS */

Employee::Employee()
{
    name = "";
    idNumber = "" ;
    department = "";
    position = "";
    yearsWorked = 0;
    
}

Employee::Employee(string userName, string userID, string userDepartment, string userPosition, int userYears)
{
    name = userName;
    idNumber = userID;
    department = userDepartment;
    position = userPosition;
    yearsWorked = userYears;
    
}

Employee::Employee(string userName, string userID)
{
    name = userName;
    idNumber = userID;
}

void Employee::setName(string userName)
{
    name = userName;
}

void Employee::setIdNumber(string id)
{
    idNumber = id;
}

void Employee::setDepartment(string userDepartment)
{
    department = userDepartment;
}

void Employee::setPosition(string userPosition)
{
    position = userPosition;
}

bool Employee::setYearsWorked(int userYears)
{
    yearsWorked = userYears;
    
    if (yearsWorked < 0)
    {
        yearsWorked = false;
    }
    else
    {
        return yearsWorked;
    }
    return yearsWorked;
}

string Employee::getName() const
{
    return name;
}

string Employee::getIdNumber() const
{
    return idNumber;
}

string Employee::getDepartment() const
{
    return department;
}

string Employee::getPosition() const
{
    return position;
}

int Employee::getYearsWorked() const
{
    return yearsWorked;
}
