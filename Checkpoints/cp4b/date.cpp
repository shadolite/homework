/********************************************************************
 * File: date.cpp
 * Purpose: Holds the implementation of the Date class methods.
 ********************************************************************/
#include "date.h"
#include <iostream>
using namespace std;

// Put your method bodies here...
void Date::set(const int m, const int d, const int y)
{
   this->month = m;
   this->day = d;
   this->year = y;
}
      
void Date::displayAmerican()
{
   cout << month << "/" << day << "/" << year << endl;
}

void Date::displayEuropean()
{
   cout << day << "/" << month << "/" << year << endl;
}

void Date::displayISO()
{
   cout << year << "-" << month << "-" << day << endl;
}