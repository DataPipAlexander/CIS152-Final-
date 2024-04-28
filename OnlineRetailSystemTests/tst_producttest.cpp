#include "producttest.h"

void ProductTest::testUpdateStock() {
    Product product(1, "Test Product", "Description", 10.0, 100, 1);
    product.updateStock(50);
    QCOMPARE(product.getStockQuantity(), 50);
}

void ProductTest::testUpdatePrice() {
    Product product(1, "Test Product", "Description", 10.0, 100, 1);
    product.updatePrice(15.0);
    QCOMPARE(product.getPrice(), 15.0);
}

QTEST_MAIN(ProductTest)
#include "producttest.moc"
