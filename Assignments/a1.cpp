/***********************************************************************
* Program:
*    Assignment 01, Genetic Genealogy
*    Brother McCracken, CS165
* Author:
*    Amy Chambers
* Summary: 
*    Write a program that uses a single genetic marker to allow a user
*    to search for relatives.
*
*    Estimated:   2.0 hrs   
*    Actual:      hrs
*      The most difficult part.
************************************************************************/

#include <iostream>
#include <string>
using namespace std;

/**********************************************************************
 * getUserDNA
 * Obtain user's DNA
 ***********************************************************************/
void getUserDNA(string userDNA)
{
   cout << "Enter your DNA sequence: ";
   cin >> userDNA;

   return;
}

/**********************************************************************
 *
 ***********************************************************************/
void getNumRelatives(int &numRelatives)
{
   cout << "Enter the number of potential relatives: ";
   cin >> numRelatives;
   cout << endl;

   return;
}

/**********************************************************************
 *
 ***********************************************************************/
void getRelativeNames(string nameRelatives, int numRelatives)
{
   string relative;
   for (int row = 0; row < numRelatives; row++)
   {
       cout << "Please enter the name of relative #" << row + 1 << ": ";
       cin >> relative;
       nameRelatives += relative;
       if (row != numRelatives - 1)
       {
           nameRelatives += " ";
       }
   }

   return;
}

/**********************************************************************
 *
 ***********************************************************************/
void getRelativeDNA(string relativeDNA, string nameRelatives, 
                    int numRelatives)
{
   string relative;
   string::iterator i;
   for (int j = 0; j < numRelatives; j++)
   {
      cout << "Please enter the DNA sequence for ";
      for (i = nameRelatives.begin(); *i != ' '; i++)
      {
          cout << *i;
          i++;
      }
      cout << ": ";
      cin >> relative;
   }

   cout << endl << "wat";

   return;
}

/**********************************************************************
 *
 ***********************************************************************/
/*void displayMatch(string userDNA, string relativeDNA, 
                  string nameRelatives, int numRelatives)
{
    for (int row = 0; row < numRelatives; row++)
    {
        int match = 0;

        for (int col = 0; col < numRelatives; col++)
        {
            if (userDNA[col] == relativeDNA[row][col])
            {
                match++;
            }
        }

        cout << "Percent match for " << nameRelatives[row] << ": "
             << match << "0%\n";
    }

   return;
}

/**********************************************************************
 * MAIN 
 * 
 ***********************************************************************/
int main()
{
   string userDNA;
   int numRelatives;

   getUserDNA(userDNA);
   getNumRelatives(numRelatives);

   string nameRelatives;
   string relativeDNA;

   getRelativeNames(nameRelatives, numRelatives);
   getRelativeDNA(relativeDNA, nameRelatives, numRelatives);

   //displayMatch(userDNA, relativeDNA, nameRelatives, numRelatives);

   return 0;
}