// File: customer.cpp

#include "customer.h"

// Put the method bodies for your customer class here
/**********************************************************************
 * getName
 * Gets name
 ***********************************************************************/
std::string Customer::getName() const
{
   return name;
}

/**********************************************************************
 * setName
 * Sets name
 ***********************************************************************/
void Customer::setName(std::string name)
{
   this->name = name;
}

/**********************************************************************
 * getAddress
 * Gets address
 ***********************************************************************/
Address Customer::getAddress() const
{
   return address;
}

/**********************************************************************
 * setAddress
 * Sets address
 ***********************************************************************/
void Customer::setAddress(Address address)
{
   this->address = address;
}

/**********************************************************************
 * prompt
 * Not called in main()
 ***********************************************************************/
/*void Customer::prompt()
{

}*/

/**********************************************************************
 * display
 * Displays customer and address
 ***********************************************************************/
void Customer::display()
{
   std::cout << name << std::endl;
   address.display();
}

/**********************************************************************
 * Customer
 * Default constructor for customer
 ***********************************************************************/
Customer::Customer()
{
   name = "unspecified";
}

/**********************************************************************
 * Customer
 * Non-default constructor for customer
 ***********************************************************************/
Customer::Customer(std::string name, Address address)
{
   setName(name);
   setAddress(address);
}