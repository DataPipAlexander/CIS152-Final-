#include "transactionmanager.h"

void TransactionManager::addTransaction(int t_id, int c_id, int p_id, int qty) {
    transactions.emplace_back(t_id, c_id, p_id, qty);
}

std::vector<Transaction>& TransactionManager::getTransactions() {
    return transactions;
}
