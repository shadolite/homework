/***********************************************************************
* Program:
*    Checkpoint 01a, C++ Basics
*    Brother McCracken, CS165
* Author:
*    Amy Chambers
* Summary:
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

void display();
void getUserData(char* name, int &age);

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   display();
   return 0;
}

/**********************************************************************
 * Function: display
 * Purpose: Display text and user data.
 ***********************************************************************/
void display()
{
   char name[256];
   int age = 0;

   cout << "Hello CS 165 World!\n";

   getUserData(name, age);

   cout << "Hello " << name << ", you are " << age << " years old.\n";

   return;
}

/**********************************************************************
 * Function: getUserData
 * Purpose: Get name and age from user.
 ***********************************************************************/
void getUserData(char* name, int &age)
{
   cout << "Please enter your first name: ";
   cin >> name;

   cout << "Please enter your age: ";
   cin >> age;
   cout << endl;

   return;
}

