/***********************
 * File: money.cpp
 ***********************/

#include <iostream>
#include <iomanip>
using namespace std;

#include "money.h"

/*****************************************************************
 * Function: prompt
 * Purpose: Asks the user for values for dollars and cents
 *   and stores them.
 ****************************************************************/
void Money :: prompt()
{
   int dollars;
   int cents;

   cout << "Dollars: ";
   cin >> dollars;

   cout << "Cents: ";
   cin >> cents;

   setDollars(dollars);
   setCents(cents);
}

/*****************************************************************
 * Function: display
 * Purpose: Displays the value of the money object.
 ****************************************************************/
void Money :: display() const 
{
   cout << "$" << getDollars() << ".";
   cout << setfill('0') << setw(2) << getCents();
}

/*****************************************************************
 * Function: getDollars
 * Purpose: Gets the private dollars variable and makes it public
 ****************************************************************/
int Money :: getDollars() const
{
   return dollars;
}
   
/*****************************************************************
 * Function: getCents
 * Purpose: Gets the private cents variable and makes it public
 ****************************************************************/
int Money :: getCents() const
{
   return cents;
}

/*****************************************************************
 * Function: setDollars
 * Purpose: Sets the input dollar amount
 ****************************************************************/
void Money :: setDollars(int dollars)
{
   if (dollars < 0)
   {
      this->dollars = -dollars;
   }

   else
   {
      this->dollars = dollars;
   }
}

/*****************************************************************
 * Function: setCents
 * Purpose: Sets the input cents amount
 ****************************************************************/
void Money :: setCents(int cents)
{
   if (cents < 0)
   {
      this->cents = -cents;
   }

   else
   {
      this->cents = cents;
   }
}