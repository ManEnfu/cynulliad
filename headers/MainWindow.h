#ifndef _CYNULLIAD_MAINFORM_H
#define _CYNULLIAD_MAINFORM_H

#include <QWidget>
#include <QLabel>

class MainWindow: public QWidget {
private:
    QLabel* text1;
public:
    MainWindow(QWidget *parent, int width, int height);
    void initWindow(int width, int height);
    ~MainWindow();
};

#endif
