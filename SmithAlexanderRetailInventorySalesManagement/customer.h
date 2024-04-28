#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
public:
    int customer_id;
    std::string name;
    std::string email;


    Customer(int id, std::string n, std::string e);
};

#endif // CUSTOMER_H
