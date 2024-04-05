#ifndef CATEGORY_H
#define CATEGORY_H

#include <string>
#include <vector>


class Category
{
public:
    Category(int id, const std::string& name, int parentID = -1);
    void getCategoryDetails() const;
    // Considering adding methods for managing subcategories if needed


private:
    int categoryID;
    std::string name;
    int parentCategoryID; // Use -1 for top-level categories with no parent
};

#endif // CATEGORY_H
