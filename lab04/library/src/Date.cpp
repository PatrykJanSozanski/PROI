//
//  Date.cpp
//  lab04
//
//  PROI: PROJECT NO4 (LAB04)
//
//  Coordinator: Wiktor Kusmirek
//
//  Created by Patryk Jan Sozański (index number: 300258) on 09/06/2019.
//  Copyright © 2019 Patryk Jan Sozański. All rights reserved.
//

#include "Date.hpp"
using namespace std;

void Date::setTime(int day, int month, long int year, int hour, int minute)
{
    this->day=day;
    this->month=month;
    this->year=year;
    this->hour=hour;
    this->minute=minute;
}
void Date::setTime()
{
    const time_t now = time(nullptr) ; // get the current time point
    const tm calendar_time = *localtime( addressof(now) ) ;// convert it to (local) calendar time
    day=calendar_time.tm_mday;
    month=calendar_time.tm_mon + 1;
    year=calendar_time.tm_year + 1900;
    hour=calendar_time.tm_hour;
    minute=calendar_time.tm_min;
}

ostream& operator<<(std::ostream &output, const Date &d)
{
    output<<"Date of addition:"<<endl<<"Day: "<<d.day<<" , month: "<<d.month<<" , year: "<<d.year<<" , hour: "<<d.hour<<" : "<<d.minute<<endl;
    return output;
}

void Date::changeDay()
{
    day=changeDate(day);
}
void Date::changeYear()
{
    year = changeDate(year);
}
int Date::getDay()
{
    return day;
}
int Date::getMonth()
{
    return month;
}
long int Date::getYear()
{
    return year;
}
int Date::getHour()
{
    return hour;
}
int Date::getMinute()
{
    return minute;
}
