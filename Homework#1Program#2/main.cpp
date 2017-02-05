//
//  main.cpp
//  Homework#1Program#2
//
//  Created by Amy Jiang on 9/8/16.
//  Copyright © 2016 Amy Jiang. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    double num1 = 3.0;
    double num2 = 5.0;
    double equal;
    
    equal = num1*num2;
    
    cout << "   " << fixed << setprecision(1) << num1 << "\n*  " << num2 << endl << "------\n " << fixed <<
            setprecision(2) << equal;
    
    double n1 = 7.1;
    double n2 = 8.3;
    double n3 = 2.2;
    double total;
    
    total = n1 * n2 - n3;
    cout << endl << endl << endl << fixed << setprecision(1) <<
            "   " << n1 << "\n*  " << n2 << "\n-  " << n3 << "\n------\n "
            << fixed << setprecision(2) << total << "\n\n\n";
    
    
    double v1 = 3.2;
    double v2 = 6.1;
    int v3 = 5;
    double total2;
    
    total2 = v1 / (v2*v3);
    
    cout << fixed << setprecision(1) << "   " << v1 << "\n/ (" << v2 << "\n*   " << v3 << ")\n------\n  "
         << fixed << setprecision(2) << total2 << "\n\n";
    return 0;
    
}