
//  Amy Jiang
//  11/24/16.
//  CS/IS 135
//  Tuesday's night class
//  MOVIE THEATER TICKETS PROGRAM

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
using namespace std;

/***********************GLOBALS*FOR*2D*ARRAY*******************************/
const int COLS = 20;
const int ROWS = 15;

/***********************PROTOTYPES*******************************/
void ticketPrices (double array[]);
void displaySeats (char array[ROWS][COLS]);
int takeSeat (char array[ROWS][COLS], int row, int seat, int countTickets);
double trackRevenue (double array[ROWS], char dArray[ROWS][COLS], int row, int seat, double revenue);


int main()
{
/***********************VARIABLES*******************************/
    
    char choice;
    int rowNum;
    int seatNum;
    int numTicketsSold = 0;
    double revenue = 0;
    char seats[ROWS][COLS] = { '0' };
    double ticketPriceForRowArray[ROWS] = { 0 };
    
    for(int row = 0; row < ROWS; row++)   //this is used to store/initialze the current array.
    {
        for(int col = 0; col < COLS; col++)
        {
            seats[row][col] = '*';
        }
    }
    displaySeats(seats);
    ticketPrices(ticketPriceForRowArray);
    
/***********************LOOP*******************************/
    
    do
    {
       cout << "\nMOVIE THEATER MENU\n";
       cout << "------------------\n"
            << "1) Sell a ticket\n"
            << "Q) Quit program\n"
            << "Please make a selection : ";
        cin >> choice;
        
        choice = tolower(choice);
        
        if (choice == '1')
        {
            cout << "\nPlease enter a row number and seat number for the ticket:\n";
            
            cout << "Row # : ";
            cin >> rowNum;
            while(rowNum < 0 || rowNum > ROWS-1)
            {
                cout << "Row # must be between 0 and 14. Please enter again: \n";
                cin >> rowNum;
            }
            
            cout << "Seat # : ";
            cin >> seatNum;
            while(seatNum < 0 || seatNum > COLS-1)
            {
                cout << "must be between 0 and 14. Please enter again: \n";
                cin >> seatNum;
            }
            revenue = trackRevenue(ticketPriceForRowArray, seats, rowNum, seatNum, revenue);
            numTicketsSold = takeSeat(seats, rowNum, seatNum, numTicketsSold);
        }
        else if ( choice != 'q')
        {
            cout << "Invalid selection. Please try again." << endl;
        }
        
    }while (choice != 'q');
    
    cout << endl << "UPDATED SEATING CHART AND SALES INFO\n"
        << "------------------------------------\n";
    displaySeats(seats);
    cout << endl << "TOTAL TICKETS SOLD: " << numTicketsSold << endl;
    cout << "TOTAL REVENUE: $" << fixed << setprecision(2) << revenue << endl;
    return 0;
    
}

void displaySeats (char array[ROWS][COLS])
{
    cout << "Seats:";
    for (int i = 0; i < COLS; ++i)
    {
        cout << setw(3) << i;
    }
    for (int i = 0; i < ROWS; ++i)
    {
        if ( i < 10)
        {
            cout << "\nRow " << i << " ";
            for (int j = 0; j < COLS ; ++j)
            {
                cout << setw(3) << array[i][j];
            }
        }
        else
        {
            cout << "\nRow " << i << "";
            for (int j = 0; j < COLS ; ++j)
            {
                cout << setw(3) << array[i][j];
            }
        }
    }
    cout << endl;
}
void ticketPrices (double array[])
{
    cout << "\nPlease enter a ticket price for each row.\n";
    for (int i = 0; i < ROWS ; ++i)
    {
        cout << "Row #" << i << " : ";
        cin >> array[i];
    }
}
int takeSeat (char array[ROWS][COLS], int row, int seat, int countTickets)
{
    if( array[row][seat] != '#')
    {
        array[row][seat] = '#';
        ++countTickets;
    }
    else
    {
        cout << endl << "Sorry. The ticket is not available for this seat.\n";
    }
    return countTickets;
}

double trackRevenue (double ticketPrice[ROWS], char array[ROWS][COLS], int row, int seat, double revenue)
{
    if( array[row][seat] != '#')
    {
        revenue = revenue + ticketPrice[row];
    }
    return revenue;
}
