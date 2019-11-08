#ifndef _CYNULLIAD_ASMINSPECTLAYOUT_H
#define _CYNULLIAD_ASMINSPECTLAYOUT_H

#include <QVBoxLayout>
#include <QLabel>
#include <QTreeWidget>
#include <QTreeWidgetItem>
class CyInfoMemoryLayout: public QVBoxLayout {
private:
    QLabel* asmtitle;
    QTreeWidget* asmlist;
public:
    CyAsmInspectLayout(QWidget* parent);
    void init();
    QTreeWidgetItem* addItem(QTreeWidget *list, QString address, QString value);
    ~CyAsmInspectLayout();
};

#endif
