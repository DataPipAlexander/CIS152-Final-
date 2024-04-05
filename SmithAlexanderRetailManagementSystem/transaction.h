#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <vector>
#include <string>
#include <utility> // For std::pair

class Transaction
{
public:
    Transaction(int id, int custID, const std::vector<std::pair<int, int>>& products, double price, const std::string& date);
    void getTransactionDetails() const;


private:
    int transactionID;
    int customerID;
    std::vector<std::pair<int, int>> products; // Pair of productID and quantity
    double totalPrice;
    std::string date;

};

#endif // TRANSACTION_H
