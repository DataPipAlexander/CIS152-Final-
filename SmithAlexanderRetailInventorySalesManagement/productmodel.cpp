#include "productmodel.h"

productmodel::productmodel(const std::vector<Product>& products,
                           const std::vector<Category>& categories,
                           QObject* parent)
    : QAbstractTableModel(parent), products(products), categories(categories)
{

}

int productmodel::rowCount(const QModelIndex& parent) const
{
    return products.size();
}

int productmodel::columnCount(const QModelIndex& parent) const
{
    return 4; // Product ID, Name, Price Category
}

QVariant productmodel::data(const QModelIndex& index, int role) const
{
    if (role == Qt::DisplayRole) {
        const Product& product = products[index.row()];

        switch (index.column()) {
        case 0: // Product ID
            return product.product_id;
        case 1: // Name
            return QString::fromStdString(product.name);
        case 2: // Price
            return product.price;
        case 3: // Category
            return QString::fromStdString(categories[product.category_id].name);
        }
    }

    return QVariant();
}

QVariant productmodel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal) {
        switch (section) {
        case 0:
            return "Product ID";
        case 1:
            return "Name";
        case 2:
            return "Price";
        case 3:
            return "Category";
        }
    }

    return QVariant();
}
