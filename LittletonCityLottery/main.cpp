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

using namespace std;

void getLottoPicks (int array0[], int size);
void GenWinNums (int array1[], int size);
int  compareLotto (int userArray[], int compArray[], int size);
void displayWinOption (int numbersRight);
void noDuplicates (int array[], int ARRAY_SIZE);


int main()
{
    char menuInput;
    int userTicket[] = { 0, 0, 0, 0, 0, 0, 0 };
    int winningNums[] = { 0, 0, 0, 0, 0, 0, 0  };
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
            
            cout << "\nWINNING TICKET NUMBERS : ";
            for (int i = 0; i < ARRAY_SIZE; ++i)
            {
                cout << winningNums[i] << " ";
            }

            cout << endl << userName << "'S TICKET         : ";
            for (int i = 0; i < ARRAY_SIZE; ++i)
            {
                cout << userTicket[i] << " ";
            }
            
            compareLottery = compareLotto(userTicket, winningNums, ARRAY_SIZE);
            displayWinOption(compareLottery);
        
        }
        else if (menuInput != 'q' && menuInput != 'Q')
        {
            cout << "Invalid. Please Try again. " << endl;
        }

    }while(menuInput != 'q' && menuInput != 'Q');
    cout << "You have chosen to quit the program. Thank you for using!\n";
    
    system("PAUSE");
    return 0;
}

void getLottoPicks (int array0[], int size)
{
    cout << "Please enter your 7 lotto number picks between 1 and 40.\n";
    for (int i = 0; i < size; ++i)
    {
        cout << "selection #" << (i+1) << ": ";
        cin >> array0[i];
        noDuplicates(array0, size);
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
        cout << "Winnings      : SORRY NOTHING\n";
    }
    else if (numbersRight == 3)
    {
        cout << "Winnings      : FREE TICKET\n";
    }
    else if(numbersRight == 4)
    {
        cout << "Winnings      : NOT BAD - $100\n";
    }
    else if(numbersRight == 5)
    {
        cout << "Winnings      : LUCKY YOU! - $5,000\n";
    }
    else if(numbersRight == 6)
    {
        cout << "Winnings      : GREAT! - $100,000\n";
    }
    else if (numbersRight == 7)
    {
        cout << "Winnings      : JACKPOT - 1 MILLION\n";

    }
}
void noDuplicates (int array[], int ARRAY_SIZE)
{
    
    
}

