// Amy Jiang
// CS/IS 135
// Tuesday Night Class
//

#include "Stats.h"
#include <iostream>
using namespace std;

Stats::Stats()
{
    size = 12;
    for(int i = 0; i < size; ++i)
    {
        arr[i] = 0.0;
    }
}
bool Stats::setVal(int index, double dataValue)
{
    if(dataValue < 0)
    {
        arr[index] = 0.0;
        return false;
    }
    else
    {
        arr[index] = dataValue;
        return true;
    }
}
void Stats::displayValues()
{
    for(int i = 0 ; i < size ; ++i)
    {
        cout << arr[i] << " ";
    }
}
double Stats::calcTotal()
{
    double sum = 0;
    for(int i = 0; i < size; ++i)
    {
        sum = sum + arr[i];
    }
    return sum;
}
double Stats::calcAvg()
{
    double average = 0;
    average = calcTotal()/size;
    return average;
}
double Stats::findLargest()
{
    double largest = arr[0];
    for ( int i = 0 ; i < size ; ++i)
    {
        if (largest <= arr[i])
        {
            largest = arr[i];
        }
       
    }
    return largest;
}
double Stats::findSmallest()
{
    double smallest = arr[0];
    for ( int i = 0 ; i < size ; ++i)
    {
        if (smallest >= arr[i])
        {
            smallest = arr[i];
        }
        
    }
    return smallest;
}
