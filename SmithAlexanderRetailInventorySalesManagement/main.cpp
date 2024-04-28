#include <QApplication>
#include <QMainWindow>
#include "ui_mainwindow.h"  // Include the generated header file

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QMainWindow *window = new QMainWindow;

    // Setup UI
    Ui::MainWindow ui;
    ui.setupUi(window);

    window->show();
    return app.exec();
}
