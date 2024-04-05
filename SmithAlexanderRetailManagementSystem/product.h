#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product
{
public:
    Product(int id, const std::string& name, const std::string& desc, double price, int qty, int catID);
    void updateStock(int newQty);
    void updatePrice(double newPrice);
    std::string getDetails() const;
    int getStockQuantity() const;

private:
    int productID;
    std::string name;
    std:: string description;
    double price;
    int stockQuantity;
    int categoryID;
};

#endif // PRODUCT_H
