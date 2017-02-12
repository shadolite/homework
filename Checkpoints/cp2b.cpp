/***********************************************************************
* Program:
*    Checkpoint 02b, Complex Numbers
*    Brother McCracken, CS165
* Author:
*    Amy Chambers
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Complex
 * Structure for real and complex numbers 
 ***********************************************************************/
struct Complex
{
   float real;
   float imaginary;
};

/**********************************************************************
 * Function: Prompt
 * Purpose: prompt user for numbers
 ***********************************************************************/
void prompt(Complex &numbers)
{
   cout << "Real: ";
   cin >> numbers.real;

   cout << "Imaginary: ";
   cin >> numbers.imaginary;
   
   return;
}

/**********************************************************************
 * Function: display
 * Purpose: Displays the results of adding real & complex numbers
 ***********************************************************************/
void display(const Complex &sum)
{
   cout << sum.real << " + " << sum.imaginary << "i\n";

   return;
}

/**********************************************************************
 * Function: addComplex
 * Purpose: Adds two complex numbers together and returns the sum.
 ***********************************************************************/
Complex addComplex(const Complex & x, const Complex & y)
{
   // TODO: Fill in the body of the add function
   Complex sum;
   sum.real = x.real + y.real;
   sum.imaginary = x.imaginary + y.imaginary;

   return sum;
}


/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // Declare two Complex objects, c1 and c2
   Complex c1;
   Complex c2;

   // Call your prompt function twice to fill in c1, and c2 
   prompt(c1);
   prompt(c2);

   // Declare another Complex for the sum
   Complex sum;

   // Call the addComplex function, putting the result in sum;
   sum = addComplex(c1, c2);
   
   cout << "\nThe sum is: ";
   display(sum);
 
   return 0;
}


