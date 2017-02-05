// Amy Jiang
// CS/IS 135 Tuesday Night Class
// Homework # 1 Program #4
// Volume of a Pyramid
// C++

/*
 Note: Volume of a Pyramid = A*h/3
 1. Create variables: volume, area, height, and base.
 2. Display: Please enter the length of one of the sides of the base:
 3. Wait for user input and store value into variable "base".
 4. Display: Please enter the height of the pyramid:
 5. Wait for user input and store into variable "height".
 6. Retrieve base.
 7. Calculate base*base and store into variable "area".
 8. Retrieve area and height.
 9. Calculate area*height/3 and store into varaible "volume".
 10. Display the base of the pyramid.
 11. Display the hieght of the pyramid.
 12. Display the volume of the pyramid.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    /*********************************************************************************************
     VARIABLES
     **********************************************************************************************/
    double area = 0 , height = 0, base = 0, volume = 0;
    
    /*********************************************************************************************
     MENU SCREEN
     **********************************************************************************************/
    cout << fixed << setprecision(2);
    cout << "Please enter the length of one of the sides of the base: " << endl;
    cin >> base;
    
    cout << "Please enter the height of the pyramid: " << endl;
    cin >> height;
    
    area = base*base;
    volume = area*height/3.0;
    
    cout << "\n\nThe area of the base of the pyramid is: " << area << endl;
    cout << "The height of the pyramid is: " << height << endl;
    cout << "The volume of the pyramid is: " << volume << endl;
    return 0;
}