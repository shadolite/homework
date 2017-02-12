// File: address.h

#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
#include <iostream>

// Put your Address class here
class Address
{
   private:
      std::string street;
      std::string city;
      std::string state;
      std::string zip;

   public:
      std::string getStreet() const;
      void setStreet(std::string street);
      std::string getCity() const;
      void setCity(std::string city);
      std::string getState() const;
      void setState(std::string state);
      std::string getZip() const;

      void setZip(std::string zip);
      void prompt();
      void display();

      Address();
      Address(std::string street, std::string city, 
              std::string state, std::string zip);
};
#endif
