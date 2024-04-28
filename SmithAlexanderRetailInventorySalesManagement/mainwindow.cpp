#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTableView>
#include <QTreeView>
#include <QInputDialog>
#include <QLayout>
#include <QDialog>
#include <QLineEdit>
#include <QSpinBox>
#include <QFormLayout>
#include <QDialogButtonBox>
#include <random>
#include <sstream>
#include <string>

std::string generateUUID() {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_int_distribution<> dis(0, 15);
    static std::uniform_int_distribution<> dis2(8, 11);

    std::stringstream ss;
    int i;
    ss << std::hex;
    for (i = 0; i < 8; i++) {
        ss << dis(gen);
    }
    ss << "-";
    for (i = 0; i < 4; i++) {
        ss << dis(gen);
    }
    ss << "-4";
    for (i = 0; i < 3; i++) {
        ss << dis(gen);
    }
    ss << "-";
    ss << dis2(gen);
    for (i = 0; i < 3; i++) {
        ss << dis(gen);
    }
    ss << "-";
    for (i = 0; i < 12; i++) {
        ss << dis(gen);
    };
    return ss.str();
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    categoryGraph(categories.size())
{
    ui->setupUi(this);
    setupUI();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionAdd_Category_triggered()
{
    // Create a dialog for adding a new category
    QDialog dialog(this);
    dialog.setWindowTitle("Add Category");

    // Create widgets for the dialog
    QLineEdit *nameEdit = new QLineEdit(&dialog);
    QSpinBox *parentIdSpinBox = new QSpinBox(&dialog);
    parentIdSpinBox->setMinimum(0);
    parentIdSpinBox->setMaximum(categories.size() - 1);

    // Create a layout for the dialog
    QFormLayout *layout = new QFormLayout(&dialog);
    layout->addRow("Name:", nameEdit);
    layout->addRow("Parent ID:", parentIdSpinBox);

    // Create buttons for the dialog
    QDialogButtonBox *buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, &dialog);
    connect(buttonBox, &QDialogButtonBox::accepted, &dialog, &QDialog::accept);
    connect(buttonBox, &QDialogButtonBox::rejected, &dialog, &QDialog::reject);
    layout->addWidget(buttonBox);

    // Show the dialog and wait for user input
    if (dialog.exec() == QDialog::Accepted) {
        // Get the entered values
        QString categoryName = nameEdit->text();
        int parentId = parentIdSpinBox->value();

        // Generate a UUID for the category ID
        std::string uuid = generateUUID();
        int categoryId = std::stoi(uuid);

        // Create a new category
        Category newCategory(categoryId, categoryName.toStdString());

        // Add the new category to the categories vector
        categories.push_back(newCategory);

        // Update the category model
        categoryModel->addCategory(newCategory);
    }
}

void MainWindow::on_actionAdd_Customer_triggered()
{
    // Show a dialog to add a new customer
    // Update the customerModel
}

void MainWindow::on_actionAdd_Product_triggered()
{
    // Show a dialog to add a new product
    // Update the productModel
}

void MainWindow::on_actionAdd_Transaction_triggered()
{
    // Show a dialog to add a new transaction
    // Update the transactionManager and transactionModel
}

void MainWindow::setupUI()
{
    // Setup category tree view
    categoryTreeView = new QTreeView(this);
    categoryModel = new categorymodel(categories, categoryGraph, this);
    categoryTreeView->setModel(categoryModel);
    ui->dockWidget_2->setWidget(categoryTreeView);

    // Setup customer table view
    customerTableView = new QTableView(this);
    customerModel = new customermodel(customers, this);
    customerTableView->setModel(customerModel);
    QVBoxLayout *customersLayout = new QVBoxLayout(ui->Customers);
    customersLayout->addWidget(customerTableView);

    // Setup product table view
    productTableView = new QTableView(this);
    productModel = new productmodel(products, categories, this);
    productTableView->setModel(productModel);
    QVBoxLayout *productsLayout = new QVBoxLayout(ui->products);
    productsLayout->addWidget(productTableView);

    // Setup transaction table view
    transactionTableView = new QTableView(this);
    transactionModel = new transactionmodel(transactionManager.getTransactions(), customers, products, this);
    transactionTableView->setModel(transactionModel);
    QVBoxLayout *transactionsLAyout = new QVBoxLayout(ui->transactionsView);
    transactionsLAyout->addWidget(transactionTableView);

}
