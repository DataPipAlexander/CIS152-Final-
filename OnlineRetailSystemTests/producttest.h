#ifndef PRODUCTTEST_H
#define PRODUCTTEST_H

#include <QtTest/QtTest>
#include "../SmithAlexanderRetailManagementSystem/product.h"

class ProductTest : public QObject
{
    Q_OBJECT

private slots:
    void testUpdateStock();
    void testUpdatePrice();
};

#endif // PRODUCTTEST_H
