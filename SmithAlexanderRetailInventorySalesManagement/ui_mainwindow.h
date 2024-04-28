#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionAdd;
    QAction *actionEdit_Product;
    QAction *actionDelete_Product;
    QAction *actionSearch_Product;
    QAction *actionAdd_Category;
    QAction *actionEdit_Category;
    QAction *actionDelete_Category;
    QAction *actionCategory_Relationships;
    QAction *actionPreferences;
    QAction *actionSave_As;
    QAction *actionPrint;
    QAction *actionRecord_Transaction;
    QAction *actionEdit_Transaction;
    QAction *actionView_Transactions;
    QAction *actionDelete_Transaction;
    QAction *actionAdd_Customer;
    QAction *actionEdit_Customer;
    QAction *actionDelete_Customer;
    QAction *actionSearch_Customer;
    QAction *actionSales_Reports;
    QAction *actionInventory_Reports;
    QAction *actionCustomer_Reports;
    QAction *actionFinancial_Reports;
    QAction *actionDocumentation;
    QAction *actionAbout;
    QAction *actionCheck_for_Updates;
    QAction *actionContact_Support;
    QAction *actionOpen_2;
    QAction *actionSave_2;
    QAction *actionexit;
    QAction *actionAdd_Category_2;
    QAction *actionAdd_Customer_2;
    QAction *actionAdd_Product;
    QAction *actionAdd_Transaction;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *Customers;
    QListView *customerView;
    QWidget *products;
    QListView *productsView;
    QWidget *transactionsView;
    QListView *listView;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        actionEdit_Product = new QAction(MainWindow);
        actionEdit_Product->setObjectName(QString::fromUtf8("actionEdit_Product"));
        actionDelete_Product = new QAction(MainWindow);
        actionDelete_Product->setObjectName(QString::fromUtf8("actionDelete_Product"));
        actionSearch_Product = new QAction(MainWindow);
        actionSearch_Product->setObjectName(QString::fromUtf8("actionSearch_Product"));
        actionAdd_Category = new QAction(MainWindow);
        actionAdd_Category->setObjectName(QString::fromUtf8("actionAdd_Category"));
        actionEdit_Category = new QAction(MainWindow);
        actionEdit_Category->setObjectName(QString::fromUtf8("actionEdit_Category"));
        actionDelete_Category = new QAction(MainWindow);
        actionDelete_Category->setObjectName(QString::fromUtf8("actionDelete_Category"));
        actionCategory_Relationships = new QAction(MainWindow);
        actionCategory_Relationships->setObjectName(QString::fromUtf8("actionCategory_Relationships"));
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        actionRecord_Transaction = new QAction(MainWindow);
        actionRecord_Transaction->setObjectName(QString::fromUtf8("actionRecord_Transaction"));
        actionEdit_Transaction = new QAction(MainWindow);
        actionEdit_Transaction->setObjectName(QString::fromUtf8("actionEdit_Transaction"));
        actionView_Transactions = new QAction(MainWindow);
        actionView_Transactions->setObjectName(QString::fromUtf8("actionView_Transactions"));
        actionDelete_Transaction = new QAction(MainWindow);
        actionDelete_Transaction->setObjectName(QString::fromUtf8("actionDelete_Transaction"));
        actionAdd_Customer = new QAction(MainWindow);
        actionAdd_Customer->setObjectName(QString::fromUtf8("actionAdd_Customer"));
        actionEdit_Customer = new QAction(MainWindow);
        actionEdit_Customer->setObjectName(QString::fromUtf8("actionEdit_Customer"));
        actionDelete_Customer = new QAction(MainWindow);
        actionDelete_Customer->setObjectName(QString::fromUtf8("actionDelete_Customer"));
        actionSearch_Customer = new QAction(MainWindow);
        actionSearch_Customer->setObjectName(QString::fromUtf8("actionSearch_Customer"));
        actionSales_Reports = new QAction(MainWindow);
        actionSales_Reports->setObjectName(QString::fromUtf8("actionSales_Reports"));
        actionInventory_Reports = new QAction(MainWindow);
        actionInventory_Reports->setObjectName(QString::fromUtf8("actionInventory_Reports"));
        actionCustomer_Reports = new QAction(MainWindow);
        actionCustomer_Reports->setObjectName(QString::fromUtf8("actionCustomer_Reports"));
        actionFinancial_Reports = new QAction(MainWindow);
        actionFinancial_Reports->setObjectName(QString::fromUtf8("actionFinancial_Reports"));
        actionDocumentation = new QAction(MainWindow);
        actionDocumentation->setObjectName(QString::fromUtf8("actionDocumentation"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionCheck_for_Updates = new QAction(MainWindow);
        actionCheck_for_Updates->setObjectName(QString::fromUtf8("actionCheck_for_Updates"));
        actionContact_Support = new QAction(MainWindow);
        actionContact_Support->setObjectName(QString::fromUtf8("actionContact_Support"));
        actionOpen_2 = new QAction(MainWindow);
        actionOpen_2->setObjectName(QString::fromUtf8("actionOpen_2"));
        actionSave_2 = new QAction(MainWindow);
        actionSave_2->setObjectName(QString::fromUtf8("actionSave_2"));
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName(QString::fromUtf8("actionexit"));
        actionAdd_Category_2 = new QAction(MainWindow);
        actionAdd_Category_2->setObjectName(QString::fromUtf8("actionAdd_Category_2"));
        actionAdd_Customer_2 = new QAction(MainWindow);
        actionAdd_Customer_2->setObjectName(QString::fromUtf8("actionAdd_Customer_2"));
        actionAdd_Product = new QAction(MainWindow);
        actionAdd_Product->setObjectName(QString::fromUtf8("actionAdd_Product"));
        actionAdd_Transaction = new QAction(MainWindow);
        actionAdd_Transaction->setObjectName(QString::fromUtf8("actionAdd_Transaction"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(190, 140, 311, 261));
        tabWidget->setCurrentIndex(2);
        Customers = new QWidget();
        Customers->setObjectName(QString::fromUtf8("Customers"));
        customerView = new QListView(Customers);
        customerView->setObjectName(QString::fromUtf8("customerView"));
        customerView->setGeometry(QRect(10, 10, 256, 192));
        tabWidget->addTab(Customers, QString());
        products = new QWidget();
        products->setObjectName(QString::fromUtf8("products"));
        productsView = new QListView(products);
        productsView->setObjectName(QString::fromUtf8("productsView"));
        productsView->setGeometry(QRect(10, 10, 256, 192));
        tabWidget->addTab(products, QString());
        transactionsView = new QWidget();
        transactionsView->setObjectName(QString::fromUtf8("transactionsView"));
        listView = new QListView(transactionsView);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 10, 256, 192));
        tabWidget->addTab(transactionsView, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setWindowTitle(QString::fromUtf8("toolBar"));
        toolBar->setIconSize(QSize(30, 50));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        dockWidget_2 = new QDockWidget(MainWindow);
        dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
        dockWidget_2->setAllowedAreas(Qt::LeftDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        dockWidget_2->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_2);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menuFile->addAction(actionOpen_2);
        menuFile->addAction(actionSave_2);
        menuFile->addAction(actionexit);
        menuEdit->addAction(actionAdd_Category_2);
        menuEdit->addAction(actionAdd_Customer_2);
        menuEdit->addAction(actionAdd_Product);
        menuEdit->addAction(actionAdd_Transaction);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionAdd->setText(QCoreApplication::translate("MainWindow", "Add Product", nullptr));
        actionEdit_Product->setText(QCoreApplication::translate("MainWindow", "Edit Product", nullptr));
        actionDelete_Product->setText(QCoreApplication::translate("MainWindow", "Delete Product", nullptr));
        actionSearch_Product->setText(QCoreApplication::translate("MainWindow", "Search Product", nullptr));
        actionAdd_Category->setText(QCoreApplication::translate("MainWindow", "Add Category", nullptr));
        actionEdit_Category->setText(QCoreApplication::translate("MainWindow", "Edit Category", nullptr));
        actionDelete_Category->setText(QCoreApplication::translate("MainWindow", "Delete Category", nullptr));
        actionCategory_Relationships->setText(QCoreApplication::translate("MainWindow", "Category Relationships", nullptr));
        actionPreferences->setText(QCoreApplication::translate("MainWindow", "Preferences", nullptr));
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        actionRecord_Transaction->setText(QCoreApplication::translate("MainWindow", "Record Transaction", nullptr));
        actionEdit_Transaction->setText(QCoreApplication::translate("MainWindow", "Edit Transaction", nullptr));
        actionView_Transactions->setText(QCoreApplication::translate("MainWindow", "View Transactions", nullptr));
        actionDelete_Transaction->setText(QCoreApplication::translate("MainWindow", "Delete Transaction", nullptr));
        actionAdd_Customer->setText(QCoreApplication::translate("MainWindow", "Add Customer", nullptr));
        actionEdit_Customer->setText(QCoreApplication::translate("MainWindow", "Edit Customer", nullptr));
        actionDelete_Customer->setText(QCoreApplication::translate("MainWindow", "Delete Customer", nullptr));
        actionSearch_Customer->setText(QCoreApplication::translate("MainWindow", "Search Customer", nullptr));
        actionSales_Reports->setText(QCoreApplication::translate("MainWindow", "Sales Reports", nullptr));
        actionInventory_Reports->setText(QCoreApplication::translate("MainWindow", "Inventory Reports", nullptr));
        actionCustomer_Reports->setText(QCoreApplication::translate("MainWindow", "Customer Reports", nullptr));
        actionFinancial_Reports->setText(QCoreApplication::translate("MainWindow", "Financial Reports", nullptr));
        actionDocumentation->setText(QCoreApplication::translate("MainWindow", "Documentation", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionCheck_for_Updates->setText(QCoreApplication::translate("MainWindow", "Check for Updates", nullptr));
        actionContact_Support->setText(QCoreApplication::translate("MainWindow", "Contact Support", nullptr));
        actionOpen_2->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave_2->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionexit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionAdd_Category_2->setText(QCoreApplication::translate("MainWindow", "Add Category", nullptr));
        actionAdd_Customer_2->setText(QCoreApplication::translate("MainWindow", "Add Customer", nullptr));
        actionAdd_Product->setText(QCoreApplication::translate("MainWindow", "Add Product", nullptr));
        actionAdd_Transaction->setText(QCoreApplication::translate("MainWindow", "Add Transaction", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Customers), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(products), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(transactionsView), QCoreApplication::translate("MainWindow", "Page", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
