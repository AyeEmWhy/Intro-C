//
//  Stats.h
//  Stats
//
//  Created by Amy Jiang on 12/8/16.
//  Copyright © 2016 Amy Jiang. All rights reserved.
//

#ifndef STATS_H
#define STATS_H
class Stats
{
    private:
        double arr[12];
        int size;
    
    public:
        Stats();
        void displayValues();
        double calcTotal();
        double calcAvg();
        double findLargest();
        double findSmallest();
        bool setVal(int, double);
    
};

#endif /* Stats_h */
