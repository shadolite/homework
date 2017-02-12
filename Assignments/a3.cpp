/***********************************************************************
* Program:
*    Assignment 03, Digital Forensics 
*    Brother McCracken, CS165
* Author:
*    Amy Chambers
* Summary: 
*    Write a program to scan through a log to identify users who 
*    accessed files in a particular window of time.
*
*    Estimated:  6 hrs   
*    Actual:     5 hrs
*      The most difficult part was trying to get the string to read
*      into the struct array. I ended up copying over the variables
*      instead of using my buffer.
************************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <cassert>
#include <iomanip>
#include <sstream>
using namespace std;

#define MAX 500

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
 * parseLine
 * Populates struct for access record
 ***********************************************************************/
void parseLine(Record accessRecord[], const int i,
               const string line) 
throw (const string)
{
   string userName;
   string fileName;
   double timeStamp;
   bool fail = 0;

   stringstream buffer;
   buffer.str(line);

   buffer >> fileName;
   if (buffer.fail())
   {
      fail = true;
   }

   buffer >> userName;
   if (buffer.fail())
   {
      fail = true;
   }

   buffer >> timeStamp;
   if (buffer.fail())
   {
      fail = true;
   }

   if (timeStamp < 1000000000 || timeStamp > 10000000000)
   {
      fail = true;
   }
   
   accessRecord[i].fileName = fileName;
   accessRecord[i].userName = userName;
   accessRecord[i].timeStamp = timeStamp;

   if (fail)
   {
      throw string(line);
   }
}

/**********************************************************************
 * parseFile
 * Opens and parses file one line at a time
 ***********************************************************************/
void parseFile(const string &accessFile, 
               Record accessRecord[], int &numRecords)
{
   string line;
   int i = 0;

   assert(accessFile.length() != 0);

   ifstream fin(accessFile.c_str());

   //Error if file does not exist
   if (fin.fail())
   {
      cout << "Error reading file. \"" << accessFile << "\"\n";
      return;
   }

   else
      while (getline(fin, line))
      {
         try
         {
            parseLine(accessRecord, i, line);
         }

         catch (const string message)
         {
            cout << "Error parsing line: " << message << endl;
         }
         numRecords++;
         i++;
      }
   cout << endl;

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
 * displayRecords
 * Displays the record
 ***********************************************************************/
void displayRecords(const double &startTime, const double &endTime, 
             const Record accessRecord[], const int numRecords)
{
   bool newLine = 0;
   //Output line if timestamp matches input
   for (int i = 0; i < numRecords; i++)
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
   
}

/**********************************************************************
 * display
 * Displays list of files accessed by which users
 ***********************************************************************/
void display(const double &startTime, const double &endTime, 
             const Record accessRecord[], const int numRecords)
{
   cout.setf(ios::fixed);
   cout.precision(0);
   
   //Header
   cout << "The following records match your criteria:\n\n"
        << setw(15) << "Timestamp" << setw(20) << "File"
        << setw(21) << "User\n" 
        << "--------------- ------------------- -------------------\n";

   displayRecords(startTime, endTime, accessRecord, numRecords);

   cout << "End of records\n";

   return;
}

/**********************************************************************
 * MAIN 
 * Store variables and call functions
 ***********************************************************************/
int main()
{
   Record accessRecord[MAX];
   string accessFile;
   double startTime;
   double endTime;
   int numRecords = 0;

   //Get file name and read file
   getFile(accessFile);
   parseFile(accessFile, accessRecord, numRecords);

   //Get search criteria and output matches
   getTime(startTime, endTime);
   cout << endl;
   display(startTime, endTime, accessRecord, numRecords);

   return 0;
}