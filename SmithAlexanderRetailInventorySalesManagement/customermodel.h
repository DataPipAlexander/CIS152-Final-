#ifndef CUSTOMERMODEL_H
#define CUSTOMERMODEL_H

#include <QAbstractTableModel>
#include <vector>
#include "customer.h"

class customermodel : public QAbstractTableModel
{
    Q_OBJECT

public:
    customermodel(const std::vector<Customer>& cusotmers, QObject* parent = nullptr);

    int rowCount(const QModelIndex& parent = QModelIndex()) const override;
    int columnCount(const QModelIndex& parent = QModelIndex()) const override;
    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

private:
    std::vector<Customer> customers;
};

#endif // CUSTOMERMODEL_H
