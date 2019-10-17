#ifndef _CYNULLIAD_INFOMEMORYLAYOUT_H
#define _CYNULLIAD_INFOMEMORYLAYOUT_H

#include <QVBoxLayout>
#include <QLabel>
#include <QTreeWidget>
#include <QTreeWidgetItem>
class CyInfoMemoryLayout: public QVBoxLayout {
private:
    QLabel* memtitle;
    QTreeWidget* memlist;
    QLabel* regtitle;
    QTreeWidget* reglist;
public:
    CyInfoMemoryLayout(QWidget* parent);
    void init();
    QTreeWidgetItem* addItem(QTreeWidget *list, QString address, QString value);
    ~CyInfoMemoryLayout();
};

#endif
