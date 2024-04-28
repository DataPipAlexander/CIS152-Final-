#ifndef PRODUCTMODEL_H
#define PRODUCTMODEL_H

#include <QAbstractTableModel>
#include <vector>
#include "product.h"
#include "category.h"


class productmodel : public QAbstractTableModel
{
    Q_OBJECT

public:
    productmodel(const std::vector<Product>& products,
                 const std::vector<Category>& categories,
                 QObject* parent = nullptr);

    int rowCount(const QModelIndex& parent = QModelIndex()) const override;
    int columnCount(const QModelIndex& parent = QModelIndex()) const override;
    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

private:
    std::vector<Product> products;
    std::vector<Category> categories;
};

#endif // PRODUCTMODEL_H
