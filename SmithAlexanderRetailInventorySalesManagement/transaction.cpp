#include "transaction.h"

Transaction::Transaction(int t_id, int c_id, int p_id, int qty)
    : transaction_id(t_id), customer_id(c_id), product_id(p_id), quantity(qty) {}
