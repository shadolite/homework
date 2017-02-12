/***************************************************************
 * File: product.cpp
 * Author: Amy Chambers
 * Purpose: Contains the method implementations for the Product class.
 ***************************************************************/

#include "product.h"

// put your method bodies here
/**********************************************************************
 * getSalesTax
 * Returns sales tax based on price
 ***********************************************************************/
float Product::getSalesTax()
{
   return basePrice * .06;
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
float Product::getTotalPrice()
{
   return basePrice + (getSalesTax() + getShippingCost());

}

/**********************************************************************
 * displayAdvertising
 * Displays the product info in advertising form
 ***********************************************************************/
void Product::displayAdvertising()
{
   std::cout.setf(std::ios::fixed);
   std::cout.setf(std::ios::showpoint);
   std::cout.precision(2);

   std::cout << name << " - " << "$" << basePrice << std::endl 
             << "(" << description << ")\n";
}

/**********************************************************************
 * displayInventory
 * Displays the product info in inventory form
 ***********************************************************************/
void Product::displayInventory()
{
   std::cout.setf(std::ios::fixed);
   std::cout.setf(std::ios::showpoint);
   std::cout.precision(2);

   std::cout << "$" << basePrice << " - "
             << name << " - ";
   std::cout.precision(1);
   std::cout << weight << " lbs\n";
}

/**********************************************************************
 * displayReceipt
 * Displays the product info in receipt form
 ***********************************************************************/
void Product::displayReceipt()
{
   std::cout.setf(std::ios::fixed);
   std::cout.setf(std::ios::showpoint);
   std::cout.precision(2);

   float tax = Product::getSalesTax();
   float shipping = Product::getShippingCost();
   float total = Product::getTotalPrice();

   std::cout << name << std::endl
             << std::setw(9) << "Price: " << std::setw(9) 
             << "$" << std::setw(8) << basePrice << std::endl;

   std::cout << std::setw(13) << "Sales tax: " << std::setw(5)
             << "$" << std::setw(8) << tax << std::endl;
        
   std::cout << std::setw(17) << "Shipping cost: " << std::setw(1)
             << "$" << std::setw(8) << shipping << std::endl;
        
   std::cout << std::setw(9) << "Total: " << std::setw(9)
             << "$" << std::setw(8) << total << std::endl;
}

/**********************************************************************
 * getName
 * Returns name of product
 ***********************************************************************/
std::string Product::getName() const
{
   return name;
}

/**********************************************************************
 * setName
 * Sets name of product
 ***********************************************************************/
void Product::setName(std::string name)
{
   this->name = name;
}

/**********************************************************************
 * getDescription
 * Returns description
 ***********************************************************************/
std::string Product::getDescription() const
{
   return description;
}

/**********************************************************************
 * setDescription
 * Sets description
 ***********************************************************************/
void Product::setDescription(std::string description)
{
   this->description = description;
}

/**********************************************************************
 * getBasePrice
 * Returns base price
 ***********************************************************************/
float Product::getBasePrice() const
{
   return basePrice;
}

/**********************************************************************
 * setBasePrice
 * Sets base price
 ***********************************************************************/
void Product::setBasePrice(float basePrice)
{
   this->basePrice = basePrice;
}

/**********************************************************************
 * getWeight
 * Returns weight
 ***********************************************************************/
float Product::getWeight() const
{
   return weight;
}

/**********************************************************************
 * setWeight
 * Sets weight
 ***********************************************************************/
void Product::setWeight(float weight)
{
   this->weight = weight;
}

/**********************************************************************
 * Product
 * Default constructor for product
 ***********************************************************************/
Product::Product()
{
   name = "none";
   description = "";
   weight = 0;
   basePrice = 0;
}

/**********************************************************************
 * Product
 * Non-default constructor for product
 ***********************************************************************/
Product::Product(std::string name, std::string description, float basePrice, 
                 float weight)
{
   setName(name);
   setDescription(description);
   setBasePrice(basePrice);
   setWeight(weight);
}
