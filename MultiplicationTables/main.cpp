//
//  main.cpp
//  MultiplicationTables
//
//  Created by Amy Jiang on 10/8/16.
//  Copyright © 2016 Amy Jiang. All rights reserved.
// Homework 3 Program 2

/**
    1. Create variables userInput, a, q.
    2. If the user chooses a, ask the user to enter a number to generate the multiplication table.
    3. Display multiplication table
    4. If the user chooses q, quit the program.
    5. If the user choose an option other than a or q create a input validation and restrict other chars.
 **/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int userInput;
    char choice;
    
    do
    {
        cout << "MENU" << endl
        << "a) Generate Multiplication Table" << endl
        << "q) Quit the program" << endl;
        cout << "Please make a selection: ";
        cin >> choice;
        
        if(choice == 'a' || choice == 'A' )
        {
            cout << "Please enter a number for your multiplication table: ";
            cin >> userInput;
            
            cout << endl << endl << "MULTIPLICATION TABLE: " << userInput << "'s" << endl;
            cout << endl;
            
            for (int row = 1; row <= userInput ; ++row) //top bar
            {
                cout << setw(5) << row;
            }
            cout << endl;
            
            cout << "   ";
            for (int row = 1; row <= userInput ; ++row) //first lined
            {
                cout << "----|" ;

            }
            cout << endl;


            for (int row = 1; row <= userInput ; ++row)
            {
                cout << setw(2) << row << "|";
                for(int col = 1; col <= userInput; ++col)
                {
                    cout << setw(4) << row * col << "|" ; //row and coloumns
                }
                
                cout << endl;
                cout << " -|"; //first line
                
                for(int line = 1; line <= userInput; ++line)
                {
                    cout << setw(5) << "----|" ; //lines continued
                }
                cout << endl;


            }
            cout << endl;
            
        }
        else if (choice != 'q' && choice != 'Q')
        {
         cout << "Invalid Selection" << endl << endl;
        }
        
    }while( choice != 'q' && choice != 'Q');
    
    cout << "You have chosen to quit the program. Thank you for using!" << endl;
    return 0;
    
}
