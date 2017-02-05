//
//  Rainfall.cpp
//  Stats
//
//  Created by Amy Jiang on 12/8/16.
//  Copyright © 2016 Amy Jiang. All rights reserved.
//
#include "Stats.h"
#include <iostream>
using namespace std;

int main ()
{
    Stats rainfall;
    double total;
    double average;
    double largest;
    double smallest;
    double rain = 0.0;
    
    for(int i = 0 ; i < 12 ; ++i)
    {
        cout << "Please enter the rainfall for month " << i+1  << ": " << endl;
        cin >> rain;
        rainfall.setVal(i, rain);
        //cin.ignore();
    }
    total = rainfall.calcTotal();
    average = rainfall.calcAvg();
    largest = rainfall.findLargest();
    smallest = rainfall.findSmallest();
    
    cout << endl << "----------RAINFALL STATISTICS---------" << endl;
    cout << "--------------------------------------" << endl;
    rainfall.displayValues();
    cout << "--------------------------------------" << endl;
    cout << "   TOTAL: " << total << endl
         << "--------------------------------------" << endl
         << "   AVERAGE: " << average << endl
         << "--------------------------------------" << endl
         << "   LARGEST RAINFALL : " << largest << endl
         << "--------------------------------------" << endl
         << "   SMALLEST RAINFALL: " << smallest << endl
         << "--------------------------------------" << endl;

    return 0;
    
}
