// Amy Jiang
// CS/IS 135 Tuesday Night Class
// C++
// Bob's Fruits Grocery Invoice

/*
 1. Create variables: numOranges, numApples, numBananas, total, orangeCost = 0.90, 
                      appleCost = 0.65; bananaCost = 0.70;
 2.Display a message asking for the number of apples you want to buy.
 3. Wait for user input and store value into variable numApples.
 4. Display a message asking for the number of oranges you want to buy.
 5. Wait for user input and store value into variable numOranges.
 6. Display a message asking for the number of bananas you want to buy.
 7. Wait for user input and store value into variable numBananas.
 8. Display an invoice telling the cost of each fruit and the total.
 
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int numOranges;
    int numApples;
    int numBananas;
    double total = 0;
    double orangeCost = 0.90;
    double appleCost = 0.65;
    double bananaCost = 0.70;
    double applePrice;
    double orangePrice;
    double bananaPrice;
    
    cout << fixed << setprecision(2);
    cout << "Please enter the number of apples you want to purchase: " << endl;
    cin >> numApples;
    
    cout << "Please enter the number of oranges you want to purchase: " << endl;
    cin >> numOranges;
    
    cout << "Please enter the number of bananas you want to purchase: " << endl;
    cin >> numBananas;
    
    applePrice = appleCost*numApples;
    orangePrice = orangeCost*numOranges;
    bananaPrice = bananaCost*numBananas;
    total = applePrice + orangePrice + bananaPrice;
    
    cout << "\nBOB'S FRUITS GROCERY INVOICE" << endl;
    cout << "----------------------------" << endl;
    cout << "  " << numApples << " Apples  @ 0.65 each   = $ " << applePrice << endl;
    cout << "  " << numOranges << " Oranges @ 0.90 each   = $ " << orangePrice << endl;
    cout << "  " << numBananas << " Bananas @ 0.70 each   = $ " << bananaPrice << endl;
    cout << "\t\t\t-----------" << endl;
    cout << "\t\t    TOTAL = $ " << total << endl;
    
    return 0;

    
}