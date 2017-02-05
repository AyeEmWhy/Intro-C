//
//  main.cpp
//  LittletonCityLottery
//
//  Created by Amy Jiang on 11/17/16.
//  Copyright © 2016 Amy Jiang. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cctype>
#include <iomanip>

using namespace std;

void getLottoPicks (int array0[], int size);
void GenWinNums (int array1[], int size);
int  compareLotto (int userArray[], int compArray[], int size);
void displayWinOption (int numbersRight);
int noDuplicates (int array[], int ARRAY_SIZE, int currentSelectionVal);


int main()
{
    char menuInput;
    int userTicket[7]= { 0, 0, 0, 0, 0, 0, 0  };
    int winningNums[7] = { 0, 0, 0, 0, 0, 0, 0  };
    int ARRAY_SIZE = 7;
    int compareLottery ;
    string userName;
    
    do
    {
        cout << "LITTLETON CITY LOTTO MODEL:\n";
        cout << "---------------------------\n";
        cout << "1) Play Lotto\n";
        cout << "q) Quit Program\n";
        cout << "Please make a selection: ";
        cin >> menuInput;
        
        
        if(menuInput == '1')
        {
            cout << "Please enter your name: ";
            getline(cin, userName);
            getline(cin, userName);
            
            getLottoPicks(userTicket, ARRAY_SIZE);
            GenWinNums(winningNums, ARRAY_SIZE);
            cout << endl << userName << "'S LOTTO RESULTS\n"
                 <<  "----------------------\n";
            cout << "WINNING TICKET NUMBERS : ";
            for (int i = 0; i < ARRAY_SIZE; ++i)
            {
                cout << fixed << setfill('0') << setw(2) << winningNums[i] << " ";
            }
            
            cout << endl << userName << "'S TICKET         : ";
            for (int i = 0; i < ARRAY_SIZE; ++i)
            {
                cout << fixed << setfill('0') << setw(2) << userTicket[i] << " ";
            }
            
            compareLottery = compareLotto(userTicket, winningNums, ARRAY_SIZE);
            displayWinOption(compareLottery);
            
        }
        else if (menuInput != 'q' && menuInput != 'Q')
        {
            cout << "Invalid. Please try again." << endl;
        }

    }
    while(menuInput != 'q' && menuInput != 'Q');
    cout << "You have chosen to quit the program. Thank you for using!\n";
    
   // system("PAUSE:");
    return 0;
}

void getLottoPicks (int array0[], int size)
{
    int check = 0;
    cout << "Please enter your 7 lotto number picks between 1 and 40.\n";
    for (int i = 0; i < size; ++i)
    {
        cout << "selection #" << (i+1) << ": ";
        cin >> array0[i];
        while(array0[i] < 1 || array0[i] > 40)
        {
            cout << "The number must be between 1 and 40. Please try again: ";
            cin >> array0[i];
        }
        check = noDuplicates(array0, i, array0[i]);
        array0[i] = check;
        
    }
}

void GenWinNums (int array1[], int size)
{
    int randomNumber = 0;
    srand((unsigned int)time(NULL));
    for (int i = 0 ; i < size; ++i)
    {
        randomNumber = rand() % 40+1;
        array1[i] = randomNumber;
    }
}

int compareLotto (int userArray[], int compArray[], int size)
{
    int count = 0;
    for (int i = 0; i < size; ++i)
    {
        if(userArray[i] == compArray[i])
        {
            count ++;
        }
    }
    return count;
}
void displayWinOption (int numbersRight)
{
    cout << "\n\nRESULTS :\n" <<
    "---------\n" <<
    "Number Matches: " << numbersRight << "\n";
    if (numbersRight <= 2)
    {
        cout << "Winnings      : SORRY NOTHING\n\n";
    }
    else if (numbersRight == 3)
    {
        cout << "Winnings      : FREE TICKET\n\n";
    }
    else if(numbersRight == 4)
    {
        cout << "Winnings      : NOT BAD - $100\n\n";
    }
    else if(numbersRight == 5)
    {
        cout << "Winnings      : LUCKY YOU! - $5,000\n\n";
    }
    else if(numbersRight == 6)
    {
        cout << "Winnings      : GREAT! - $100,000\n\n";
    }
    else if (numbersRight == 7)
    {
        cout << "Winnings      : JACKPOT - 1 MILLION\n\n";
        
    }
}
int noDuplicates (int array[], int currentSize, int check)
{   
        for(int i = 0 ; i < currentSize ; ++i)
        {
            if(array[i] != 0) 
            {
               if(check == array[i])
               {
                   cout << "You already picked this number. Please enter a different number: ";
                   cin >> check;
                  check = noDuplicates(array, currentSize, check);
               }
            }
        }
    return check;

}

