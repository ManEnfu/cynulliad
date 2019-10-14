#ifndef _CYNULLIAD_MAINFORM_H
#define _CYNULLIAD_MAINFORM_H

#include <QWidget>
#include <QLabel>
#include <QTextEdit>

class MainWindow: public QWidget {
private:
    QLabel* text1;
    QLabel* text2;
    QLabel* text3;
    QTextEdit* textbox1;
    QTextEdit* textbox2;
    QTextEdit* textbox3;
public:
    MainWindow(QWidget *parent, int width, int height);
    void initWindow(int width, int height);
    void resizeEvent(QResizeEvent *re);
    void updateSize();
    ~MainWindow();
};

#endif
