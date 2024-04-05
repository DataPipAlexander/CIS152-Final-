#include <iostream>
#include "product.h"
#include "customer.h"
#include "transaction.h"
#include "category.h"

int main() {
    Product product(1, "Example Product", "This is an example description.", 19.99, 100, 1);
    std::cout << product.getDetails() << std::endl;

    Customer customer(1, "John Doe", "john.doe@example.com");
    customer.addTransaction(101);
    customer.addTransaction(102);
    std::cout << customer.getPurchaseHistory() << std::endl;

    std::vector<std::pair<int, int>> products = {{101, 2}, {102, 1}}; // Example products and quantities
    Transaction transaction(1, 1, products, 59.97, "2024-03-28");
    transaction.getTransactionDetails();

    Category category(1, "Electronics");
    category.getCategoryDetails();

    return 0;
}
