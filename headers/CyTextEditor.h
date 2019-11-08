#ifndef _CYNULLIAD_TEXT_EDITOR_H
#define _CYNULLIAD_TEXT_EDITOR_H

#include <QVBoxLayout>
#include <QLabel>
#include <QTextEdit>
#include <QPushButton>

class CyTextEditor: public QVBoxLayout {
private:
    QLabel* title;
    QTextEdit* text;
    QPushButton* runbutton;
public:
    CyTextEditor(QWidget *parent);
    void init();
    ~CyTextEditor();
};

#endif
