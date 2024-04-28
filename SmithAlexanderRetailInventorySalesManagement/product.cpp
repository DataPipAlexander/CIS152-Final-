#include "product.h"

Product::Product(int id, std::string n, double p, int cat_id)
    : product_id(id), name(n), price(p), category_id(cat_id) {}
