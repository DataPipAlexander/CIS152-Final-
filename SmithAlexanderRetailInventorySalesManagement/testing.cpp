/*#include <iostream>
#include "product.h"
#include "customer.h"
#include "transaction.h"
#include "category.h"
#include "categorygraph.h"
#include "transactionmanager.h"

int main() {
    // Initialize Category Graph
    CategoryGraph categoryGraph(5); // Assuming 5 categories for simplicity

    // Add categories with edges showing the relationships
    categoryGraph.addEdge(0, 1); // 0 -> 1 ( e.g., Electronics -> Computers)
    categoryGraph.addEdge(1, 2); // 1 -> 2 (e.g., Computers -> Laptops)

    // Display category relationships
    for (int i = 0; i < 5; ++i) {
        std::cout << "Category " << i << " is linked to: ";
        const std::list<int>& adjList = categoryGraph.getAdjlist(i);
        for (int linkedCategory : adjList) {
            std::cout << linkedCategory << " ";
        }
        std::cout << std::endl;
    }

    // Initialize Transaction Manager;
    TransactionManager transactionManager;

    // Add some transactions
    transactionManager.addTransaction(1001, 501, 301, 2); // Transaction details
    transactionManager.addTransaction(1002, 502, 302, 1); // Transaction details

    // Display transactions
    std::vector<Transaction>& transactions = transactionManager.getTransactions();
    for (const Transaction& t : transactions) {
        std::cout << "Transaction " << t.transaction_id << ": Product " << t.product_id << ", Quantity " << t.quantity << std::endl;
    }

    // Initialization and use of Products and Customers
    Product product1(101, "Laptop", 999.99, 1);
    Customer customer1(501, "John Doe", "john.doe@example.com");

    std::cout << "Product: " << product1.name << ", Price: $" << product1.price << std::endl;
    std::cout << "Customer: " << customer1.name << ", Email: " << customer1.email << std::endl;

    return 0;
}
*/
