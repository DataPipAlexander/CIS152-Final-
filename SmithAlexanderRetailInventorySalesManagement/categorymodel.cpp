#include "categorymodel.h"

categorymodel::categorymodel(const std::vector<Category>& categories, const CategoryGraph& graph, QObject* parent)
    : QAbstractItemModel(parent), categories(categories), categoryGraph(graph)
{

}

void categorymodel::addCategory(const Category& category)
{
    // Find the parent category index
    QModelIndex parentIndex;
    // Find the category id in the categories vector
    auto it = std::find_if(categories.begin(), categories.end(), [&category](const Category& cat) {
        return cat.category_id == category.category_id;
    });
    if (it != categories.end()) {
        // Category already exists
        return;
    }

    // Find the parent category index
    if (category.parentId != 0) {
        for (int i = 0; i < categories.size(); ++i) {
            if (categories[i].category_id == category.parentId) {
                parentIndex = createIndex(i, 0);
                break;
            }
        }
    }

    // Add the new category to the categories vector
    beginInsertRows(parentIndex, rowCount(parentIndex), rowCount(parentIndex));
    categories.push_back(category);
    endInsertRows();

    // Update the category graph
    categoryGraph.addVertex(); // Add a new vertex to the category graph
    if (category.parentId != 0) {
        categoryGraph.addEdge(category.parentId, category.category_id);
    }
}

// Implement the required methods from QAbstractItemModel

QModelIndex categorymodel::index(int row, int column, const QModelIndex& parent) const
{
    if (!parent.isValid()) {
        // Root category
        if (row < static_cast<int>(categories.size())) {
            return createIndex(row, column, nullptr);
        }
    } else {
        // Child category
        int parentCategoryId = static_cast<int>(parent.internalId());
        const std::list<int>& adjacentVertices = categoryGraph.getAdjlist(parentCategoryId);
        if (row < static_cast<int>(adjacentVertices.size())) {
            std::list<int>::const_iterator it = adjacentVertices.begin();
            std::advance(it, row);
            return createIndex(row, column, reinterpret_cast<quintptr>(&(*it)));
        }
    }

    return QModelIndex();
}

QModelIndex categorymodel::parent(const QModelIndex& index) const
{
    if (!index.isValid()) {
        return QModelIndex();
    }

    int childCategoryId = static_cast<int>(index.internalId());
    for (int i = 0; i < static_cast<int>(categories.size()); ++i) {
        const std::list<int>& adjacentVertices = categoryGraph.getAdjlist(i);
        auto it = std::find(adjacentVertices.begin(), adjacentVertices.end(), childCategoryId);
        if (it != adjacentVertices.end()) {
            return createIndex(i, 0, nullptr);
        }
    }

    return QModelIndex();
}

int categorymodel::rowCount(const QModelIndex& parent) const
{
    if (!parent.isValid()) {
        // Root categories
        return static_cast<int>(categories.size());
    } else {
        // Child categories
        int parentCategoryId = static_cast<int>(parent.internalId());
        return static_cast<int>(categoryGraph.getAdjlist(parentCategoryId).size());
    }
}

int categorymodel::columnCount(const QModelIndex& parent) const
{
    return 1; // single column for category name
}

QVariant categorymodel::data(const QModelIndex& index, int role) const
{
    if (!index.isValid()) {
        return QVariant();
    }

    if (role == Qt::DisplayRole) {
        if (!index.parent().isValid()) {
            // Root category
            return QString::fromStdString(categories[index.row()].name);
        } else {
            // Child category
            int childCategoryId = static_cast<int>(index.internalId());
            return QString::fromStdString(categories[childCategoryId].name);
        }
    }

    return QVariant();
}

QVariant categorymodel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal) {
        return "Categories";
    }

    return QVariant();
}
