#include "MainWindow.h"
#include <QDesktopWidget>

MainWindow::MainWindow(QWidget *parent, int width, int height) {
    this->initWindow(width, height);
}

void MainWindow::initWindow(int width, int height) {
    QDesktopWidget *desktop = new QDesktopWidget();
    this->setGeometry((desktop->screen()->width() - width) / 2,
        (desktop->screen()->height() - height) / 2,
        width, height);
    this->setWindowTitle("Cynulliad");

    text1 = new QLabel("Assembly code:");
    text1->move(10, 10);
    text1->setParent(this);
    delete desktop;
}

MainWindow::~MainWindow() {
    delete text1;
}
