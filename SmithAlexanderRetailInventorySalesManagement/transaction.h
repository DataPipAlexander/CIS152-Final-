#ifndef TRANSACTION_H
#define TRANSACTION_H

class Transaction
{
public:
    int transaction_id;
    int customer_id;
    int product_id;
    int quantity;


    Transaction(int t_id, int c_id, int p_id, int qty);
};

#endif // TRANSACTION_H
