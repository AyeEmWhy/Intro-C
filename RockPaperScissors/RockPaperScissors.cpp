// Amy Jiang
// CS/IS 135 C++
// 13 October 2016

/**         PSEUDOCODE
    0. Create prototypes.
    1. Create variables playerChoice, computerChoice, isItATie, and result.
    2. Create a function named: getComputerChoice.
            - getComputerChoice should generate a random number b/w 1 - 3.
            - 1. Rock , 2. Paper, 3. Scissors
            - return an int value.
    3. Create a function named: getPlayerChoice.
            - ask the user what choice they would like to select (same as above choices)
            - display menu: 
                1) Rock
                2) Paper
                3) Scissors
                Please enter your choice:
            - implement input validation for ints other than the ones allowed.
            - return the int value that the user has requested.
    4. Create a function named: isTie.
            - this function takes two arguments, the computer's choice and player's choice
            - it compares to see if the same . if same return true, else return false.
            - return a bool.
    5. Create a function named:  isPlayerWinner.
            - this function takes two arguments (int pChoice, int cChoice)
            - return true if player wins, else return false if player loses.
    6. Create display menu:
                ROCK PAPER SCISSORS MENU
                -------------------------
                p)Play Game
                q)Quit
            - if user enters 'p':
                Call the method getComputerChoice and store value into computerChoice.
                Call the method getPlayerChoice and store value into playerChoice
            - create if-else-if statements for win/tie/lose.
    7. in main convert the values returned into either Rock, Paper, or Scissors.
        Display :
                eg. You chose: Scissors
                    The computer chose: Paper
    8. Call the method isTie and store value into isItATie.
    9. Call the method isPlayerWinner and store value into winner.
    10.  Display result of the choice made.
 **/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <String>
using namespace std;

int getComputerChoice ();
int getPlayerChoice ();
bool isTie (int, int);
bool isPlayerWinner (int, int);

int main ()
{
    char userInput;
    int playerChoice;
    int computerChoice = 0;
    bool isItATie = false;
    bool result;
    string stringPChoice;
    string stringCChoice;
    do
    {
        
        cout << endl << "ROCK PAPER SCISSORS MENU" << endl
            << "------------------------" << endl
            << "p) Play Game" << endl
            << "q) Quit" << endl
            << "Please enter your choice : " << endl;
        cin  >> userInput;
    
        if (userInput == 'p' || userInput == 'P')
        {
            computerChoice = getComputerChoice();
                if(computerChoice == 1)
                {
                    stringCChoice = "Rock";
                }
                else if (computerChoice == 2)
                {
                    stringCChoice = "Paper";
                }
                else
                {
                    stringCChoice = "Scissors";
                }
            
            playerChoice = getPlayerChoice();
                if(playerChoice == 1)
                {
                    stringPChoice = "Rock";
                }
                else if (playerChoice == 2)
                {
                    stringPChoice = "Paper";
                }
                else
                {
                    stringPChoice = "Scissors";
                }
            
            isItATie = isTie(playerChoice, computerChoice);
            result = isPlayerWinner(playerChoice, computerChoice);
            if( isItATie == true)
            {
                cout << endl << "You chose : " << stringPChoice << endl;
                cout << "The computer chose : " << stringCChoice << endl << endl;
                cout << "It's a TIE!" << endl << endl;
            }
            else if( isItATie == false)
            {
                if( result == true)
                {
                    cout << endl << "You chose : " << stringPChoice << endl;
                    cout << "The computer chose : " << stringCChoice << endl << endl;
                    cout << "You WIN!" << endl << endl;
                }
                else
                {
                    cout << endl << "You chose : " << stringPChoice << endl;
                    cout << "The computer chose : " << stringCChoice << endl << endl;
                    cout << "You LOSE! " << endl << endl;
                }
            }
            
        }
        else if (userInput != 'Q' && userInput != 'q')
        {
            cout << "Invalid selection. Try again." << endl << endl;
        }
        
    }while (userInput != 'Q' && userInput != 'q'); //exits when false
    cout << "You have chosen to quit the program. Thank you for using the program!" << endl;
    return 0;
}

int getComputerChoice()
{
    srand ((unsigned int) time(NULL));
    int cChoice;
    cChoice = rand() % 3 + 1;
    return cChoice;
}

int getPlayerChoice()
{
    int pChoice;
    cout << endl << endl << "Rock, Paper, or Scissors?" << endl
         << "1) Rock" << endl
         << "2) Paper" << endl
         << "3) Scissors" << endl
         << "Please enter your choice : " << endl;
    cin  >> pChoice;
    while (pChoice < 1 || pChoice > 3)
    {
        cout << "Invalid Selection. Try Again." << endl
             << "1) Rock" << endl
             << "2) Paper" << endl
             << "3) Scissors" << endl
             << "Please enter choice: " << endl;
        cin  >> pChoice;
    }
    return pChoice;
}

bool isTie(int pChoice, int cChoice)
{
    if (pChoice == cChoice)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isPlayerWinner ( int plChoice, int chChoice) // 1. Rock 2. Paper 3. Scissors
{                                                 // 1 beats 3, 2 beats 1, 3 beats 2.
    if((plChoice == 1 && chChoice == 3) || (plChoice == 2 && chChoice == 1) || (plChoice == 3 && chChoice == 2))
    {
        return true;
    }
    else
    {
        return false;
    }
}
    


