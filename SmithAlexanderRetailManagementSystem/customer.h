#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <vector>
#include <string>

class Customer
{
public:
    Customer(int id, const std::string& name, const std::string& email);
    void addTransaction(int transactionID);
    std::string getPurchaseHistory() const;
    void updateDetails(const std::string& newName, const std::string& newEmail);

private:
    int customerID;
    std::string name;
    std::string email;
    std::vector<int> purchaseHistory; // Stores transaction IDs
};

#endif // CUSTOMER_H
