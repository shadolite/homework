/***********************************************************************
* Program:
*    Checkpoint 01b, Arrays
*    Brother McCracken, CS165
* Author:
*    Amy Chambers
* Summary:
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

void getSize(int &size);
void getList(int* list, int size);
void displayMultiples(int* list, int size);

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   int size;
   getSize(size);

   int list[size];
   getList(list, size);

   displayMultiples(list, size);

   return 0;
}

/**********************************************************************
 * Function: getSize
 * Purpose: Get the size of the array from the user
 ***********************************************************************/
void getSize(int &size)
{
   cout << "Enter the size of the list: ";
   cin >> size;

   return;
}

/**********************************************************************
 * Function: getList
 * Purpose: Get the numbers for the array
 ***********************************************************************/
void getList(int* list, int size)
{
   for (int i = 0; i < size; i++)
   {
      cout << "Enter number for index " << i << ": ";
      cin >> list[i];
   }
   cout << endl;
   return;
}

/**********************************************************************
 * Function: displayMultiples
 * Purpose: Display numbers if they are a multiple of 3
 ***********************************************************************/
void displayMultiples(int* list, int size)
{
   cout << "The following are divisible by 3:\n";

   for (int i = 0; i < size; i++)
   {
      if (list[i] % 3 == 0)
      {
         cout << list[i] << endl;
      }
   }
   return;
}
