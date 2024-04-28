#ifndef CATEGORYMODEL_H
#define CATEGORYMODEL_H

#include <QAbstractItemModel>
#include <vector>
#include "category.h"
#include "categorygraph.h"

class categorymodel : public QAbstractItemModel
{
    Q_OBJECT

public:
    categorymodel(const std::vector<Category>& categories, const CategoryGraph& graph, QObject* parent = nullptr);

    void addCategory(const Category& category);

    // Implement required methods from QAbstractItemModel
    QModelIndex index(int row, int column, const QModelIndex& parent = QModelIndex()) const override;
    QModelIndex parent(const QModelIndex& index) const override;
    int rowCount(const QModelIndex& parent = QModelIndex()) const override;
    int columnCount(const QModelIndex& parent = QModelIndex()) const override;
    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

private:
    std::vector<Category> categories;
    CategoryGraph categoryGraph;
};

#endif // CATEGORYMODEL_H
