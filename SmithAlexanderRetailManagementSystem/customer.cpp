#include "customer.h"
#include <sstream> // For getPurchaseHistory string formatting

Customer::Customer(int id, const std::string& name, const std::string& email)
    : customerID(id), name(name), email(email) {}

void Customer::addTransaction(int transactionID) {
    purchaseHistory.push_back(transactionID);
}

std::string Customer::getPurchaseHistory() const {
    std::stringstream history;
    history << "Purchase History for " << name << " (ID: " << customerID << "):\n";
    for (int transactionID : purchaseHistory) {
        history << "- Transaction ID: " << transactionID << "\n";
    }
    return history.str();
}

void Customer::updateDetails(const std::string& newName, const std::string& newEmail) {
    name = newName;
    email = newEmail;
}
