
QT += core gui widgets
QT += widgets

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        category.cpp \
        categorygraph.cpp \
        categorymodel.cpp \
        customer.cpp \
        customermodel.cpp \
        main.cpp \
        mainwindow.cpp \
        product.cpp \
        productmodel.cpp \
        testing.cpp \
        transaction.cpp \
        transactionmanager.cpp \
        transactionmodel.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    category.h \
    categorygraph.h \
    categorymodel.h \
    customer.h \
    customermodel.h \
    mainwindow.h \
    product.h \
    productmodel.h \
    transaction.h \
    transactionmanager.h \
    transactionmodel.h \
    ui_mainwindow.h

FORMS += \
    mainwindow.ui

DISTFILES +=
