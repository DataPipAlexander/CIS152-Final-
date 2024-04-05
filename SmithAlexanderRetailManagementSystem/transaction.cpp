#include "transaction.h"
#include <iostream>


Transaction::Transaction(int id, int custID, const std::vector<std::pair<int, int>>& products, double price, const std::string& date)
    : transactionID(id), customerID(custID), products(products), totalPrice(price), date(date) {}

void Transaction::getTransactionDetails() const {
    std::cout << "Transaction ID: " << transactionID << "\nCustomer ID: " << customerID << "\nDate: " << date << "\nTotal Price: " << totalPrice << std::endl;
    std::cout << "Products and Quantities:" << std::endl;
    for (const auto& product : products) {
        std::cout << "Product ID: " << product.first << " Quantity: " << product.second << std::endl;
    }
}
