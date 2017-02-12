// File: address.cpp

#include "address.h"

// Put your method bodies for the address class here
/**********************************************************************
 * getStreet
 * Gets street
 ***********************************************************************/
std::string Address::getStreet() const
{
   return street;
}

/**********************************************************************
 * setStreet
 * Sets street
 ***********************************************************************/
void Address::setStreet(std::string street)
{
   this->street = street;
}

/**********************************************************************
 * getCity
 * Gets city
 ***********************************************************************/
std::string Address::getCity() const
{
   return city;
}

/**********************************************************************
 * setCity
 * Sets city
 ***********************************************************************/
void Address::setCity(std::string city)
{
   this->city = city;
}

/**********************************************************************
 * getState
 * Gets state
 ***********************************************************************/
std::string Address::getState() const
{
   return state;
}

/**********************************************************************
 * setState
 * Sets state
 ***********************************************************************/
void Address::setState(std::string state)
{
   this->state = state;
}

/**********************************************************************
 * getZip
 * Gets zip
 ***********************************************************************/
std::string Address::getZip() const
{
   return zip;
}

/**********************************************************************
 * setZip
 * Sets zip
 ***********************************************************************/
void Address::setZip(std::string zip)
{
   this->zip = zip;
}

/**********************************************************************
 * prompt
 * Not called in main()
 ***********************************************************************/
/*void Address::prompt()
{

}*/

/**********************************************************************
 * display
 * Displays address
 ***********************************************************************/
void Address::display()
{
   std::cout << street << std::endl
        	    << city << ", " << state << " " << zip << std::endl;
}

/**********************************************************************
 * Address
 * Default constructor
 ***********************************************************************/
Address::Address()
{
   street = "unknown";
   city = "";
   state = "";
   zip = "00000";
}

/**********************************************************************
 * Address
 * Non-default constructor
 ***********************************************************************/
Address::Address(std::string street, std::string city, 
                 std::string state, std::string zip)
{
   setStreet(street);
   setCity(city);
   setState(state);
   setZip(zip);
}
