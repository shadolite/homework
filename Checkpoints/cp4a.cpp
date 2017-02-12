/***********************************************************************
* Program:
*    Checkpoint 04a, Classes 
*    Brother McCracken, CS165
* Author:
*    Amy Chambers
* Summary:
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

/**********************************************************************
 * Book
 * Purpose: Book class holds and prompts for title and author
 ***********************************************************************/
class Book
{
   private:
      string title;
      string author;

   public:
      void prompt()
      {
         cout << "Title: ";
         getline(cin, title);
         
         cout << "Author: ";
         getline(cin, author);

         return;
      }
      void display()
      {
         cout << "\"" << title << "\"" << " by " << author << endl;
         return;
      }
};

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   Book book;

   book.prompt();

   book.display();
   return 0;
}