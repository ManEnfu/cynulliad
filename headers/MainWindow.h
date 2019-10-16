#ifndef _CYNULLIAD_MAINFORM_H
#define _CYNULLIAD_MAINFORM_H

#include <QWidget>
#include <QLabel>
#include <QTextEdit>
#include <QTreeWidget>
#include "InfoMemoryListDisplay.h"

class MainWindow: public QWidget {
private:
    QLabel* text1;
    QLabel* text2;
    QLabel* text3;
    QTextEdit* textbox1;
    QTextEdit* textbox2;
    QTextEdit* textbox3;
    QTreeWidget* memlist;
    QTreeWidget* reglist;
public:
    MainWindow(QWidget *parent, int width, int height);
    void initWindow(int width, int height);
    void resizeEvent(QResizeEvent *re);
    void updateSize();
    ~MainWindow();
};

#endif
