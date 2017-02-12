/***************************************************************
 * File: product.h
 * Author: Amy Chambers
 * Purpose: Contains the definition of the Product class
 ***************************************************************/
#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;

// put your class definition here
/**********************************************************************
 * Product
 * Defines product class
 ***********************************************************************/
class Product 
{
   private:
      string name;
      float cost;
      float weight;
      string description;

   private:
      float getSalesTax();
      float getShippingCost();
      float getTotalPrice(const float tax, const float shipping);   
   
   public:
      void prompt();
      void displayAd();
      void displayInv();
      void displayRec();

};
#endif
