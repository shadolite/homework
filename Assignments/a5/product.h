/***************************************************************
 * File: product.h
 * Author: Amy Chambers
 * Purpose: Contains the definition of the Product class
 ***************************************************************/
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iomanip>
#include <iostream>

// put your class definition here
/**********************************************************************
 * Product
 * Defines product class
 ***********************************************************************/
class Product 
{
   private:
      std::string name;
      std::string description;
      float basePrice;
      float weight;

   private:
      float getSalesTax();
      float getShippingCost();
   
   public:
      void displayAdvertising();
      void displayInventory();
      void displayReceipt();

      float getTotalPrice();   
      std::string getName() const;
      void setName(std::string name);
      std::string getDescription() const;
      void setDescription(std::string description);
      float getBasePrice() const;
      void setBasePrice(float basePrice);
      float getWeight() const;
      void setWeight(float weight);

      Product();
      Product(std::string name, std::string description, float basePrice, 
              float weight);
};
#endif
