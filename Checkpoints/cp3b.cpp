/***********************************************************************
* Program:
*    Checkpoint 03b, Errors 
*    Brother McCracken, CS165
* Author:
*    Amy Chambers
* Summary:
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <cassert>
using namespace std;

/**********************************************************************
 * Function: display
 * Purpose: Display vald input
 ***********************************************************************/
void display(const int &num)
{
   cout << "The number is " << num << ".\n";
   return;
}

/**********************************************************************
 * Function: prompt
 * Purpose: Prompt user for input and determine if input is valid
 ***********************************************************************/
void prompt(int &num)
{
   cout << "Enter a number: ";
   cin >> num;

   while (cin.fail())
   {
      cout << "Invalid input.\n" << "Enter a number: ";

      cin.clear();
      cin.ignore(256, '\n');

      cin >> num;
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

   prompt(num);
   display(num);

   return 0;
}