#ifndef CATEGORY_H
#define CATEGORY_H

#include <string>

class Category
{
public:
    int category_id;
    std::string name;
    int parentId;


    Category(int id = 0, std::string n = "", int parent = 0);
};

#endif // CATEGORY_H
