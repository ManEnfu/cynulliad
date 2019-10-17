/*
    MainWindow.cpp
    Implementation of class MainWindow
*/
// Include headers
#include "CyMainWindow.h"
#include <QWidget>
#include <QDesktopWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMenu>

CyMainWindow::CyMainWindow(QWidget *parent, int width, int height) {
    /*
        Construct instance of MainWindow.
    */
    this->initWindow(width, height);
}

void CyMainWindow::initWindow(int width, int height) {
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
    QWidget *center = new QWidget();

    // Setup menubar.
    menubar = this->menuBar();
    QMenu* menufile = menubar->addMenu("File");
    menufile->addAction("Load Assembly File");
    menufile->addAction("Save Assembly File");
    QMenu* menuedit = menubar->addMenu("Edit");
    menuedit->addAction("Copy");
    menuedit->addAction("Paste");
    QMenu* menuhelp = menubar->addMenu("Help");
    menuhelp->addAction("About");

    // Layout Elements
    colEdit = new CyTextEditor(NULL);
    colMem = new CyInfoMemoryLayout(NULL);

    // Layout Construction
    QHBoxLayout* spacelayout = new QHBoxLayout();
    spacelayout->addLayout(colEdit, 2);
    spacelayout->addLayout(colMem, 1);

    // Set the window layout
    center->setLayout(spacelayout);
    this->setCentralWidget(center);

    // Place the elements according to the size of the window.
    this->updateSize();

    // We don't need this anymore, so deallocate it to prevent memory leakage.
    delete desktop;
}

void CyMainWindow::updateSize() {

}

void CyMainWindow::resizeEvent(QResizeEvent *re) {
    this->updateSize();
}

CyMainWindow::~CyMainWindow() {
    delete colEdit;
    delete colMem;
}
