#include "customermodel.h"

customermodel::customermodel(const std::vector<Customer>& customers, QObject* parent)
    : QAbstractTableModel(parent), customers(customers)
{

}

int customermodel::rowCount(const QModelIndex& parent) const
{
    return customers.size();
}

int customermodel::columnCount(const QModelIndex& parent) const
{
    return 3; // Customer ID, Name, Email
}

QVariant customermodel::data(const QModelIndex& index, int role) const
{
    if (role == Qt::DisplayRole) {
        const Customer& customer = customers[index.row()];

        switch (index.column()) {
        case 0: // Customer ID
            return customer.customer_id;
        case 1: // Name
            return QString::fromStdString(customer.name);
        case 2: // Email
            return QString::fromStdString(customer.email);
        }
    }

    return QVariant();
}

QVariant customermodel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal) {
        switch (section) {
        case 0:
            return "Customer ID";
        case 1:
            return "Name";
        case 2:
            return "Email";
        }
    }

    return QVariant();
}
