#include "product.h"

Product::Product(int id, const std::string& name, const std::string& desc, double price, int qty, int catID)
    : productID(id), name(name), description(desc), price(price), stockQuantity(qty), categoryID(catID) {}

void Product::updateStock(int newQty) {
    stockQuantity = newQty;
}

void Product::updatePrice(double newPrice) {
    price = newPrice;
}

std::string Product::getDetails() const {
    return "ID: " + std::to_string(productID) + "\nName: " + name + "\nDescription: " + description +
           "\nPrice: " + std::to_string(price) + "\nStock Quantity: " + std::to_string(stockQuantity) +
           "\nCategory ID: " + std::to_string(categoryID);
}

int Product::getStockQuantity() const {
    return stockQuantity;
}
