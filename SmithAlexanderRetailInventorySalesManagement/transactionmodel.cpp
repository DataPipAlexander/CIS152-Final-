#include "transactionmodel.h"

transactionmodel::transactionmodel(const std::vector<Transaction>& transactions,
                                   const std::vector<Customer>& customers,
                                   const std::vector<Product>& products,
                                   QObject* parent)
    : QAbstractTableModel(parent), transactions(transactions), customers(customers), products(products)
{

}

int transactionmodel::rowCount(const QModelIndex& parent) const
{
    return transactions.size();
}

int transactionmodel::columnCount(const QModelIndex& parent) const
{
    return 4; // Transaction ID, Customer, Product, Quantity
}

QVariant transactionmodel::data(const QModelIndex& index, int role) const
{
    if (role == Qt::DisplayRole) {
        const Transaction& transaction = transactions[index.row()];

        switch (index.column()) {
        case 0: // Transaction ID
            return transaction.transaction_id;
        case 1: // Customer
            return QString::fromStdString(customers[transaction.customer_id].name);
        case 2: // Product
            return QString::fromStdString(products[transaction.product_id].name);
        case 3: // Quantity
            return transaction.quantity;
        }
    }

    return QVariant();
}

QVariant transactionmodel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal) {
        switch (section) {
        case 0:
            return "Transaction ID";
        case 1:
            return "Customer";
        case 2:
            return "Product";
        case 3:
            return "Quantity";
        }
    }


    return QVariant();
}
