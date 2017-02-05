// Amy Jiang
// CS/IS 135 Tuesday Night Class
// 8 September 2016

/* 
1. Create variables: numExplorers, numExLost, totalLeft, and shareLeft.
2. display message welcoming the user and ask how many explorers the user has.
3. Wait for user input. Store value into variable numExplorers.
4. Ask the user how many they lost in battle.
5. Store into variable numExpLost.
6. Retrieve numExplorers and numLost, caclulate and store into totalLeft.
7. Retrieve totalLeft and calculate shareLeft.
8. Display messages telling the user how much they had, lost, and the total gold earned.
 
*/


#include <iostream>
using namespace std;

int main ()
{
    int numExplorers = 0;
    int numExpLost = 0;
    int totalLeft = 0;
    int shareLeft = 0;
    
    cout << "Welcome to Lost Fortune!" << endl << endl;
    cout << "Please enter the following questions for your personalized adventure: \n\n";
    cout << "Enter the number of Explorers: \n";
    cin >> numExplorers;
    cout << "Enter the number of Explorers Lost in Battle: \n";
    cin >> numExpLost;
    
    totalLeft = numExplorers - numExpLost;
    shareLeft = 750%totalLeft;
    
    cout << endl << "You bravely led " << numExplorers << " adventurers on a quest for gold." << endl;
    cout << "The group fought a band of ogres and lost " << numExpLost << " members." << endl;
    cout << "Only " << totalLeft << " survived." << endl << endl;
    cout << "The party was about to give up when they stumbled upon the" << endl
         << "buried fortune of 750 gold pieces. The group split the loot evenly" <<endl;
    cout << "and as the qeust leader you kept the extra " << shareLeft << " gold pieces." << endl << endl;
    return 0;
    
}
