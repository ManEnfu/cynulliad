#include <QApplication>
#include <QWidget>
#include <QLabel>
#include "MainWindow.h"
int main(int argc, char** argv) {
    QApplication a(argc, argv);
    MainWindow* win = new MainWindow(NULL, 800, 600);

    win->show();

    return a.exec();
}
