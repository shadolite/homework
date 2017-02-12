// File: customer.h

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "address.h"

#include <string>
#include <iostream>

// put your Customer class here
class Customer
{
   private:
      std::string name;
      Address address;

   public:
      std::string getName() const;
      void setName(std::string name);
      Address getAddress() const;
      void setAddress(Address address);

      void prompt();
      void display();

      Customer();
      Customer(std::string name, Address address);
};
#endif
