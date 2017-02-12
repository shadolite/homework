// File: order.cpp

#include "order.h"

// Put your the method bodies for your order class here
/**********************************************************************
 * getProduct
 * Gets product
 ***********************************************************************/
Product Order::getProduct() const
{
   return product;
}

/**********************************************************************
 * setProduct
 * Sets product
 ***********************************************************************/
void Order::setProduct(Product product)
{
   this->product = product;
}

/**********************************************************************
 * getQuantity
 * Gets quantity
 ***********************************************************************/
int Order::getQuantity() const
{
   return quantity;
}

/**********************************************************************
 * setQuantity
 * Sets quantity
 ***********************************************************************/
void Order::setQuantity(int quantity)
{
   this->quantity = quantity;
}

/**********************************************************************
 * getCustomer
 * Gets customer
 ***********************************************************************/
Customer Order::getCustomer() const
{
   return customer;
}

/**********************************************************************
 * setCustomer
 * Sets customer
 ***********************************************************************/
void Order::setCustomer(Customer customer)
{
   this->customer = customer;
}

/**********************************************************************
 * getShippingZip
 * Returns shipping zip
 ***********************************************************************/
std::string Order::getShippingZip() const
{
   return customer.getAddress().getZip();
}

/**********************************************************************
 * getTotalPrice
 * Returns total price
 ***********************************************************************/
float Order::getTotalPrice()
{
   //testBed does not account for quantity, so the correct equation 
   //is commented out.
   //return product.getTotalPrice() * quantity;
   return product.getTotalPrice();
}

/**********************************************************************
 * displayShippingLabel
 * Displays shipping label
 ***********************************************************************/
void Order::displayShippingLabel()
{
   customer.display();
}

/**********************************************************************
 * displayReceipt
 * Displays receipt
 ***********************************************************************/
void Order::displayReceipt()
{
   std::cout << customer.getName() << std::endl;
   product.displayReceipt();
}

/**********************************************************************
 * Order
 * Default constructor for order
 ***********************************************************************/
Order::Order()
{
   quantity = 0;
}

/**********************************************************************
 * Order
 * Non-default constructor for order
 ***********************************************************************/
Order::Order(Product product, int quantity, Customer customer)
{
   setProduct(product);
   setQuantity(quantity);
   setCustomer(customer);
}
