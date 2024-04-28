#ifndef TRANSACTIONMANAGER_H
#define TRANSACTIONMANAGER_H

#include <vector>
#include "transaction.h"


class TransactionManager {
private:
    std::vector<Transaction> transactions;


public:
    void addTransaction(int t_id, int c_id, int p_id, int qty);
    std::vector<Transaction>& getTransactions();
};

#endif // TRANSACTION_MANAGER_H
