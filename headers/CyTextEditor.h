#ifndef _CYNULLIAD_TEXT_EDITOR_H
#define _CYNULLIAD_TEXT_EDITOR_H

#include <QVBoxLayout>
#include <QLabel>
#include <QTextEdit>

class CyTextEditor: public QVBoxLayout {
private:
    QLabel* title;
    QTextEdit* text;
public:
    CyTextEditor(QWidget *parent);
    void init();
    ~CyTextEditor();
};

#endif
