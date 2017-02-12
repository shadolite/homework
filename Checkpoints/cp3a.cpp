/***********************************************************************
* Program:
*    Checkpoint 03a, Exceptions
*    Brother McCracken, CS165
* Author:
*    Amy Chambers
* Summary:
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
#include <cassert>
using namespace std;

/**********************************************************************
 * Function: Display
 * Purpose: Displays the number if no exceptions are thrown.
 ***********************************************************************/
void display(const int &num)
{
   cout << "The number is " << num << ".\n";
   return;
}

/**********************************************************************
 * Function: Prompt
 * Purpose: Prompt user for a number, throw an exception if the number
 * does not meet certain qualifications.
 ***********************************************************************/
void prompt(int &num) throw (const string)
{
   cout << "Enter a number: ";
   cin >> num;

   if (num < 0)
   {
      throw string("The number cannot be negative.\n");
   }

   if (num > 100)
   {
      throw string("The number cannot be greater than 100.\n");
   }

   if ((num % 2) != 0)
   {
      throw string("The number cannot be odd.\n");
   }
   
   return;
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   int num;

   try
   {
      prompt(num);
      display(num);
   }

   catch (const string message)
   {
      cout << "Error: " << message;
   }

   return 0;
}