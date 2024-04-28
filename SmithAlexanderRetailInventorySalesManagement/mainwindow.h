#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeView>
#include <QTableView>

#include "categorymodel.h"
#include "customermodel.h"
#include "productmodel.h"
#include "transactionmodel.h"
#include "categorygraph.h"
#include "transactionmanager.h"
#include "ui_mainwindow.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionExit_triggered();
    void on_actionAdd_Category_triggered();
    void on_actionAdd_Customer_triggered();
    void on_actionAdd_Product_triggered();
    void on_actionAdd_Transaction_triggered();

private:
    void setupUI();

    Ui::MainWindow *ui;
    std::vector<Category> categories;
    std::vector<Customer> customers;
    std::vector<Product> products;
    CategoryGraph categoryGraph;
    TransactionManager transactionManager;

    QTreeView* categoryTreeView;
    categorymodel* categoryModel;
    QTableView* customerTableView;
    customermodel* customerModel;
    QTableView* productTableView;
    productmodel* productModel;
    QTableView* transactionTableView;
    transactionmodel* transactionModel;
};

#endif // MAINWINDOW_H
