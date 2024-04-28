#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
public:
    int product_id;
    std::string name;
    double price;
    int category_id;

    Product(int id, std::string n, double p, int cat_id);
};

#endif // PRODUCT_H
