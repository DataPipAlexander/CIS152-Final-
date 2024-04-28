#ifndef TRANSACTIONMODEL_H
#define TRANSACTIONMODEL_H

#include <QAbstractTableModel>
#include <vector>
#include "transaction.h"
#include "customer.h"
#include "product.h"

class transactionmodel : public QAbstractTableModel
{
    Q_OBJECT


public:
    transactionmodel(const std::vector<Transaction>& transactions,
                     const std::vector<Customer>& customers,
                     const std::vector<Product>& products,
                     QObject* parent = nullptr);

    int rowCount(const QModelIndex& parent = QModelIndex()) const override;
    int columnCount(const QModelIndex& parent = QModelIndex()) const override;
    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

private:
    std::vector<Transaction> transactions;
    std::vector<Customer> customers;
    std::vector<Product> products;
};

#endif // TRANSACTIONMODEL_H
