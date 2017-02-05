// Amy Jiang
// 7 October 2016
// Homework #3 Program #1
// Dice Rolling Simulation

/*
    1. Create variables numOfTimesDicedRolled, face1, face2, face3, face4, face5, face6.
                         diceRolled1, diceRolled2, diceRolled3, diceRolled4, diceRolled5, diceRolled6.
    2. Use a for loop to restrict negative numbers for number of times rolled.
    3.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
    double numOfTimesDicedRolled;
    int diceRolled1 = 0;
    int diceRolled2 = 0;
    int diceRolled3 = 0;
    int diceRolled4 = 0;
    int diceRolled5 = 0;
    int diceRolled6 = 0;
    
    double percent1;
    double percent2;
    double percent3;
    double percent4;
    double percent5;
    double percent6;

    
    srand ((unsigned int) time(NULL));
    
    int randomDiceRoll;
    
    cout << "How many times would you like to roll the dice?" << endl;
    cin >> numOfTimesDicedRolled;
    while (numOfTimesDicedRolled <= 0)
    {
        cout << "This is an invalid number." << endl;
        cout << "The number of rolls should be equal to or greater than 1."
        << endl << "Please enter again." << endl;
        cin >> numOfTimesDicedRolled;
    }
    
    for ( int index = 1; index <= numOfTimesDicedRolled; index++)
    {
        randomDiceRoll = rand() % 6 + 1; //generate random roll

        if(randomDiceRoll == 1)
        {
            ++diceRolled1;
        }
        else if (randomDiceRoll == 2)
        {
            ++diceRolled2;
        }
        else if (randomDiceRoll == 3)
        {
            ++diceRolled3;
        }
        else if (randomDiceRoll == 4)
        {
            ++diceRolled4;
        }
        else if (randomDiceRoll == 5)
        {
            ++diceRolled5;
        }
        else
        {
            ++diceRolled6;
        }
    }
    
    percent1 = (diceRolled1/numOfTimesDicedRolled)*100;
    percent2 = (diceRolled2/numOfTimesDicedRolled)*100;
    percent3 = (diceRolled3/numOfTimesDicedRolled)*100;
    percent4 = (diceRolled4/numOfTimesDicedRolled)*100;
    percent5 = (diceRolled5/numOfTimesDicedRolled)*100;
    percent6 = (diceRolled6/numOfTimesDicedRolled)*100;

    cout << endl << "DICE ROLL STATISTICS" << endl << endl
         << "# Rolled 	 # Times 	 % Times" << endl
         << "-------- 	 -------- 	 --------" << endl
         << "\t1\t\t" << diceRolled1 << "\t\t" << fixed << setprecision(2) << percent1 << "%" << endl
         << "\t2\t\t" << diceRolled2 << "\t\t" << fixed << setprecision(2) << percent2 << "%" << endl
         << "\t3\t\t" << diceRolled3 << "\t\t" << fixed << setprecision(2) << percent3 << "%" << endl
         << "\t4\t\t" << diceRolled4 << "\t\t" << fixed << setprecision(2) << percent4 << "%" << endl
         << "\t5\t\t" << diceRolled5 << "\t\t" << fixed << setprecision(2) << percent5 << "%" << endl
         << "\t6\t\t" << diceRolled6 << "\t\t" << fixed << setprecision(2) << percent6 << "%" << endl;

    
    return 0;

}
