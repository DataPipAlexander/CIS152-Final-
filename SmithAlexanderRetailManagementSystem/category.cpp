#include "category.h"
#include <iostream>


Category::Category(int id, const std::string& name, int parentID)
    : categoryID(id), name(name), parentCategoryID(parentID) {}

void Category::getCategoryDetails() const {
    std::cout << "Category ID: " << categoryID << "\nName: " << name << std::endl;
    if (parentCategoryID != -1) {
        std::cout << "Parent Category ID: " << parentCategoryID << std::endl;
    } else {
        std::cout << "This category is a top-level category." << std::endl;
    }
}
