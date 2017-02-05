//
//  EmployeeTest.cpp
//  Employee
//
//  Created by Amy Jiang on 12/7/16.
//  Copyright © 2016 Amy Jiang. All rights reserved.
//
#include "Employee.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main ()
{
    /*
    string userName;
    string idNum;
    string userDep;
    string userPos;
    int userYears;
     */
    
    const int SIZE = 3;
    Employee arr[SIZE];
    
    arr[0].setName("Jenny Jacobs");
    arr[0].setIdNumber("JJ8990");
    arr[0].setDepartment("Accounting");
    arr[0].setPosition("President");
    arr[0].setYearsWorked(15);
    
    arr[1].setName("Myron Smith");
    arr[1].setIdNumber("MS7571");
    arr[1].setDepartment("IT");
    arr[1].setPosition("Programmer");
    arr[1].setYearsWorked(5);
    
    arr[2].setName("Chris Raines");
    arr[2].setIdNumber("CR6873");
    arr[2].setDepartment("Manufacturing");
    arr[2].setPosition("Engineer");
    arr[2].setYearsWorked(30);
    
    cout << "---------------------------------------------------------------------------" << endl;
    cout << "|Name          |ID Number   |Department      |Postion     |Years Worked   |" << endl;
    cout << "---------------------------------------------------------------------------" << endl;
    for (int i = 0; i < SIZE; ++i)
    {
        cout << "|" << fixed << setw(12) << arr[i].getName()
             << "  |" << fixed << setw(10) << arr[i].getIdNumber()
             << "  |" << fixed << setw(14) << arr[i].getDepartment()
             << "  |" << fixed << setw(10) << arr[i].getPosition()
             << "  |" << fixed << setw(3) <<  arr[i].getYearsWorked()
             << "            |" <<  endl;
    }
    cout << "---------------------------------------------------------------------------" << endl;
    /*
    for ( int i = 0 ; i < SIZE; ++i)
    {
        cout << "Please enter your name : " ;
        getline(cin,userName);
        cout << endl << "Please enter your ID Number: ";
        getline(cin,idNum);
        cout << endl << "Please enter your department: ";
        getline(cin,userDep);
        cout << endl << "Please enter your position: ";
        getline(cin,userPos);
        cout << endl << "Please enter your years worked: ";
        cin >> userYears;
        
        arr[i].setName(userName);
        arr[i].setIdNumber(idNum);
        arr[i].setDepartment(userDep);
        arr[i].setPosition(userPos);
        arr[i].setYearsWorked(userYears);
        
        cin.ignore();

    }
     */
    
}
