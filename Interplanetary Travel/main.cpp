// Amy Jiang
// Interplanetary Travel
// Homework #2
// C++
// 23 September 2016


/* PSEUDOCODE
 1. Declare variables: from user: weight & choice
            variables: for program: newWeight, distancePlanet, travelTime, hours, days, years.
 2. Display an menu :
            INTERPLANETARY TRAVEL MENU
            ---------------------------
            a) Mercury
            b) Venus
            c) Earth
            d) Mars
            e) Jupiter
            f) Saturn
            g) Uranus
            h) Neptune
            q) Quit
 
 3. Display message: Select a planet to travel to or q to quit the program:
 4. Store value into variable choice
 5.
 
 */
#include <iostream>
#include <String>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    char choice;
    string planetName;
    double surfaceGravity;
    double speed;
    double weight;
    double newWeight;
    double distanceFromSun;
    double distanceBetweenPlanets;
    double travelTime;
    double days;
    double years;
    
    cout << "Welcome to INTERPLANETARY TRAVEL PROGRAM!" << endl;
    cout << "This program enables you to find out your travel time to the planet"
         << endl << "you want to travel to as well as your weight on that planet."
         << endl << "Please enjoy the program and find the perfect planet for you!"
         << endl << endl << endl;
    cout << "INTERPLANETARY TRAVEL MENU" << endl;
    cout << "--------------------------" << endl;
    cout << "a) Mercury\n" << "b) Venus\n" << "c) Earth\n" << "d) Mars\n" << "e) Jupiter\n"
         << "f) Saturn\n" << "g) Uranus\n" << "h) Neptune\n" << "q) quit\n" << endl;
    
    cout << "Select a planet to travel to or q to quit the program: " << endl;
    cin >> choice;
    
    if (choice >= 'a' && choice <= 'h')
    {
        cout << "Please enter your weight (in lbs): " << endl;
        cin >> weight;
        cout << "Please enter the speed (in mile per hour) that you would like to travel at: "
             << endl << endl;
        cin >> speed;
        if (choice == 'a')
        {
            planetName = "Mercury";
            surfaceGravity = 0.27;
            distanceFromSun = 36;
            
        }
        else if (choice == 'b')
        {
            planetName = "Venus";
            surfaceGravity = 0.86;
            distanceFromSun = 67;
        }
        else if (choice == 'c')
        {
            planetName = "Earth";
            surfaceGravity = 1.00;
            distanceFromSun = 93;
        }
        else if (choice == 'd')
        {
            planetName = "Mars";
            surfaceGravity = 0.37;
            distanceFromSun = 141;
        }
        else if (choice == 'e')
        {
            planetName = "Jupiter";
            surfaceGravity = 2.64;
            distanceFromSun = 483;
        }
        else if (choice == 'f')
        {
            planetName = "Saturn";
            surfaceGravity = 1.17;
            distanceFromSun = 886;
        }
        else if (choice == 'g')
        {
            planetName = "Uranus";
            surfaceGravity = 0.92;
            distanceFromSun = 1782;
        }
        else if (choice == 'h')
        {
            planetName = "Neptune";
            surfaceGravity = 1.44;
            distanceFromSun = 2793;
        }
        
        newWeight = weight*surfaceGravity;
        distanceBetweenPlanets = abs( 93.0 - distanceFromSun);
        travelTime = (distanceBetweenPlanets/speed)*pow(10, 6);
        days = travelTime/24.0;
        years = days/365.0;
        
        
        cout << "INTERPLANETARY TRAVEL:  Earth to " << planetName << endl;
        cout << "--------------------------------------------------" << endl;
        cout << "Your weight on " << planetName << ":      " << fixed << setprecision(2)
             << newWeight << " lbs" << endl << endl;
        cout << "Your travel time to " << fixed << setprecision(0) << planetName <<":" << endl;
        cout << "    In Hours: " << travelTime << " hours" <<endl;
        cout << "    In Days : " << days << " days" << endl;
        cout << "    In Years : " << fixed << setprecision(2) << years << " years" << endl << endl;
    }
    
    else if (choice == 'q')
    {
        cout << "You have chosen to quit the program. Thank you for using the program!" << endl;
    }
    else
    {
        cout << "You have entered an invalid selection." << endl;
    }
    return 0;
    
}
