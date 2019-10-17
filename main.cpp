/*
    main.cpp
    Entry point.
*/
// Include Headers
#include <QApplication>
#include "CyMainWindow.h"

int main(int argc, char** argv) {
    // Construct the app.
    QApplication app(argc, argv);
    // Construct main window and show it.
    CyMainWindow* win = new CyMainWindow(NULL, 800, 600);
    win->show();
    // App loop
    return app.exec();
}
