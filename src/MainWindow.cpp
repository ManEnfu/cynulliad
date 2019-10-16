/*
    MainWindow.cpp
    Implementation of class MainWindow
*/
// Include headers
#include "MainWindow.h"
#include <QDesktopWidget>
#include <QStringList>
#include <QTreeWidgetItem>

MainWindow::MainWindow(QWidget *parent, int width, int height) {
    /*
        Construct instance of MainWindow.
    */
    this->initWindow(width, height);
}

void MainWindow::initWindow(int width, int height) {
    /*
        Initialize this instance of MainWindow. this includes setting up
        GUI elements.
    */
    // Window
    QDesktopWidget *desktop = new QDesktopWidget();
    this->setGeometry((desktop->screen()->width() - width) / 2,
        (desktop->screen()->height() - height) / 2,
        width, height);
    this->setWindowTitle("Cynulliad");

    // Labels
    text1 = new QLabel("Assembly Code");
    text1->setParent(this);
    text2 = new QLabel("Instruction Sequence");
    text2->setParent(this);
    text3 = new QLabel("Registers and Memories");
    text3->setParent(this);

    // Text boxes
    textbox1 = new QTextEdit();
    textbox1->setParent(this);
    textbox2 = new QTextEdit();
    textbox2->setParent(this);
    textbox3 = new QTextEdit();
    textbox3->setParent(this);

    // Place the elements according to the size of the window.
    this->updateSize();

    // We don't need this anymore, so deallocate it to prevent memory leakage.
    delete desktop;
}

void MainWindow::updateSize() {
    int grid = this->width() / 3;
    text1->move(10, 10);
    textbox1->setGeometry(10, 30, grid - 20, 500);
    text2->move(grid  + 10, 10);
    textbox2->setGeometry(grid + 10, 30, grid - 20, 500);
    text3->move(2 * grid + 10, 10);
    textbox3->setGeometry(2 * grid + 10, 30, grid - 20, 500);
}

void MainWindow::resizeEvent(QResizeEvent *re) {
    this->updateSize();
}

MainWindow::~MainWindow() {
    delete text1;
}
