/***************************************************************
 * File: product.cpp
 * Author: Amy Chambers
 * Purpose: Contains the method implementations for the Product class.
 ***************************************************************/

#include "product.h"
#include <iostream>
#include <iomanip>

// put your method bodies here
/**********************************************************************
 * prompt
 * Gets product input from user
 ***********************************************************************/
void Product::prompt()
{
   cout << "Enter name: ";
   getline (cin, this->name);

   cout << "Enter description: ";
   getline (cin, this->description);

   cout << "Enter weight: ";
   cin >> this->weight;

   cout << "Enter price: ";
   cin >> this->cost;
   while (cin.fail() || cost < 0)
   {
      cin.clear();
      cin.ignore(256, '\n');

      cout << "Enter price: ";
      cin >> this->cost;
   }
}

/**********************************************************************
 * getSalesTax
 * Returns sales tax based on price
 ***********************************************************************/
float Product::getSalesTax()
{
   return cost * .06;
}

/**********************************************************************
 * getShippingCost
 * Returns the shipping cost based on weigh
 ***********************************************************************/
float Product::getShippingCost()
{
   float shipping = 2.00;

   if (weight < 6.0)
   {
      return shipping;
   }

   else
   {
      for (float i = weight; i >= 6; i--)
      {
         shipping += .10;
      }
      return shipping;
   }
}

/**********************************************************************
 * getTotalPrice
 * Returns the total price, including tax and shipping
 ***********************************************************************/
float Product::getTotalPrice(const float tax, const float shipping)
{
   return cost + (tax + shipping);

}

/**********************************************************************
 * displayAd
 * Displays the product info in advertising form
 ***********************************************************************/
void Product::displayAd()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   cout << name << " - " << "$" << cost << endl 
        << "(" << description << ")\n";
}

/**********************************************************************
 * displayInv
 * Displays the product info in inventory form
 ***********************************************************************/
void Product::displayInv()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   cout << "$" << cost << " - "
        << name << " - ";
   cout.precision(1);
   cout << weight << " lbs\n";
}

/**********************************************************************
 * displayRec
 * Displays the product info in receipt form
 ***********************************************************************/
void Product::displayRec()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   float tax = Product::getSalesTax();
   float shipping = Product::getShippingCost();
   float total = Product::getTotalPrice(tax, shipping);

   cout << name << endl
        << setw(9) << "Price: " << setw(9) 
        << "$" << setw(8) << cost << endl;

   cout << setw(13) << "Sales tax: " << setw(5)
        << "$" << setw(8) << tax << endl;
        
   cout << setw(17) << "Shipping cost: " << setw(1)
        << "$" << setw(8) << shipping << endl;
        
   cout << setw(9) << "Total: " << setw(9)
        << "$" << setw(8) << total << endl;
}