/********************************************************************
 * File: date.h
 * Purpose: Holds the definition of the Date class.
 ********************************************************************/

#ifndef DATE_H
#define DATE_H

// put your class definition here
// along with the data members, and method prototypes
class Date
{
   private:
      int month;
      int day;
      int year;

   public:
      void set(const int m, const int d, const int y);
      void displayAmerican();
      void displayEuropean();
      void displayISO();
};

#endif
