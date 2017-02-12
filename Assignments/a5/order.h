// File: order.h

#ifndef ORDER_H
#define ORDER_H

#include "product.h"
#include "customer.h"

#include <string>
#include <iostream>

// Put your Order class here
class Order
{
   private:
      Product product;
      int quantity;
      Customer customer;

   public:
      Product getProduct() const;
      void setProduct(Product product);
      int getQuantity() const;
      void setQuantity(int quantity);
      Customer getCustomer() const;
      void setCustomer(Customer customer);

      std::string getShippingZip() const;
      float getTotalPrice();
      void displayShippingLabel();
      void displayReceipt();

      Order();
      Order(Product product, int quantity, Customer customer);
};
#endif
