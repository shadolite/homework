/***********************************************************************
* Program:
*    Assignment 02, Digital Forensics 
*    Brother McCracken, CS165
* Author:
*    Amy Chambers
* Summary: 
*    Write a program to scan through a log to identify users who 
*    accessed files in a particular window of time.
*
*    Estimated:  2 hrs   
*    Actual:     4 hrs
*      The most difficult part was learning how to pass an array
*      when it is also a struct.
************************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <cassert>
#include <iomanip>
using namespace std;

/**********************************************************************
 * Record
 * Structure for access record
 ***********************************************************************/
struct Record
{
   string userName;
   string fileName;
   double timeStamp;
};

/**********************************************************************
 * getFile
 * Prompt user to input a file name
 ***********************************************************************/
void getFile(string &accessFile)
{
   cout << "Enter the access record file: ";
   cin >> accessFile;

   return;
}

/**********************************************************************
 * readFile
 * Opens and reads the file into an array
 ***********************************************************************/
void readFile(const string &accessFile, Record accessRecord[])
{
   assert(accessFile.length() != 0);

   ifstream fin(accessFile.c_str());

   //Error if file does not exist
   if (fin.fail())
   {
      cout << "Error reading file. \"" << accessFile << "\"\n";
      return;
   }

   //Otherwise read into a struct array
   for (int i = 0; i < 500; i++)
   {
      fin >> accessRecord[i].fileName >> accessRecord[i].userName
          >> accessRecord[i].timeStamp;
   };

   fin.close();

   return;
}

/**********************************************************************
 * getTime
 * Prompt user for start and end times
 ***********************************************************************/
void getTime(double &startTime, double &endTime)
{
   cout << "Enter the start time: ";
   cin >> startTime;

   cout << "Enter the end time: ";
   cin >> endTime;

   return;
}

/**********************************************************************
 * display
 * Displays list of files accessed by which users
 ***********************************************************************/
void display(const double &startTime, const double &endTime, 
             const Record accessRecord[])
{
   cout.setf(ios::fixed);
   cout.precision(0);
   bool newLine = 0;

   //Header
   cout << "The following records match your criteria:\n\n"
        << setw(15) << "Timestamp" << setw(20) << "File"
        << setw(21) << "User\n" 
        << "--------------- ------------------- -------------------\n";

   //Output line if timestamp matches input
   for (int i = 0; i < 500; i++)
   {
      if (accessRecord[i].timeStamp >= startTime 
         && accessRecord[i].timeStamp <= endTime)
      {
         cout << setw(15) << accessRecord[i].timeStamp
              << setw(20) << accessRecord[i].fileName
              << setw(20) << accessRecord[i].userName;
         newLine = 1;
         if (newLine)
            cout << endl;
      }
   }
   cout << "End of records\n";

   return;
}

/**********************************************************************
 * MAIN 
 * Store variables and call functions
 ***********************************************************************/
int main()
{
   Record accessRecord[500];
   string accessFile;
   double startTime;
   double endTime;

   //Get file name and read file
   getFile(accessFile);
   cout << endl;
   readFile(accessFile, accessRecord);

   //Get search criteria and output matches
   getTime(startTime, endTime);
   cout << endl;
   display(startTime, endTime, accessRecord);

   return 0;
}