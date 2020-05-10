//
//  Date.hpp
//  lab04
//
//  PROI: PROJECT NO4 (LAB04)
//
//  Coordinator: Wiktor Kusmirek
//
//  Created by Patryk Jan Sozański (index number: 300258) on 09/06/2019.
//  Copyright © 2019 Patryk Jan Sozański. All rights reserved.
//

#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
#include <iostream>
class Date
{
private:
    int day;
    int month;
    long int year;
    int hour;
    int minute;
public:
    void setTime(int day, int month, long int year, int hour, int minute);
    void setTime(); //current Time
    friend std::ostream& operator<<(std::ostream &output, const Date &D);
    void changeDay();
    void changeYear();
    int getDay();
    int getMonth();
    long int getYear();
    int getHour();
    int getMinute();
    template <typename W>
    W changeDate(W number)
    {
        number--;
        return number;
    }
};
#endif // DATE_H_INCLUDED
