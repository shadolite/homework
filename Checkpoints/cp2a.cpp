/***********************************************************************
* Program:
*    Checkpoint 02a, Structs
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
 * STUDENT 
 * Combination of first and last name of student, and student ID 
 ***********************************************************************/
struct Student
{
   string firstName;
   string lastName;
   int idNum;
};

void getData(Student & student);
void display(const Student & student);

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   Student student;

   getData(student);

   display(student);

   return 0;
}

/**********************************************************************
 * Function: getData
 * Purpose: Prompts the student for name and ID number
 ***********************************************************************/
void getData(Student & student)
{
   cout << "Please enter your first name: ";
   getline(cin, student.firstName);

   cout << "Please enter your last name: ";
   getline(cin, student.lastName);

   cout << "Please enter your id number: ";
   cin >> student.idNum;

   cout << endl;

   return;
}

/**********************************************************************
 * Function: display
 * Purpose: Displays the student's name and ID number
 ***********************************************************************/
void display(const Student & student)
{
   cout << "Your information:\n" << student.idNum << " - "
        << student.firstName << " " << student.lastName << endl;
   return;
}