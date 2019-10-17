#ifndef _CYNULLIAD_MAINFORM_H
#define _CYNULLIAD_MAINFORM_H

#include <QMainWindow>
#include <QMenuBar>
//#include <QMenu>
#include "CyInfoMemoryLayout.h"
#include "CyTextEditor.h"

class CyMainWindow: public QMainWindow {
private:
    CyTextEditor *colEdit;
    CyInfoMemoryLayout *colMem;
    QMenuBar *menubar;
public:
    CyMainWindow(QWidget *parent, int width, int height);
    void initWindow(int width, int height);
    void resizeEvent(QResizeEvent *re);
    void updateSize();
    ~CyMainWindow();
};

#endif
