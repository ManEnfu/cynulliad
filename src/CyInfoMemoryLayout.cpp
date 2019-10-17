#include "CyInfoMemoryLayout.h"
#include <QString>
#include <QTreeWidgetItem>
#include <QString>
#include <QStringList>
#include "CyUtils.h"

CyInfoMemoryLayout::CyInfoMemoryLayout(QWidget* parent) {
    this->init();
}

void CyInfoMemoryLayout::init() {
    //Memory field label
    memtitle = new QLabel("Memories");
    //Memory field table
    memlist = new QTreeWidget();
    memlist->setColumnCount(2);
    QStringList mheaders;
    mheaders.append("Address");
    mheaders.append("Value");
    memlist->setHeaderLabels(mheaders);
    for (int i = 0xFFFF; i >= 0xFF00; i--) {
        addItem(memlist, tohex(i, 4), "0");
    };

    //Memory field label
    regtitle = new QLabel("Registers");
    //Memory field table
    reglist = new QTreeWidget();
    reglist->setColumnCount(2);
    QStringList rheaders;
    rheaders.append("Register");
    rheaders.append("Value");
    reglist->setHeaderLabels(rheaders);
    addItem(reglist, "%eax", "0");
    addItem(reglist, "%ebx", "0");
    addItem(reglist, "%ecx", "0");
    addItem(reglist, "%edx", "0");
    addItem(reglist, "%esi", "0");
    addItem(reglist, "%edi", "0");
    addItem(reglist, "%ebp", "0");
    addItem(reglist, "%esp", "0");
    addItem(reglist, "ZF", "0");
    addItem(reglist, "CF", "0");
    addItem(reglist, "SF", "0");
    addItem(reglist, "OF", "0");
    // Add to layout
    this->addWidget(memtitle);
    this->addWidget(memlist, 3);
    this->addWidget(regtitle);
    this->addWidget(reglist, 1);
}

QTreeWidgetItem* CyInfoMemoryLayout::addItem(QTreeWidget* list, QString address, QString value) {
    QTreeWidgetItem *item = new QTreeWidgetItem();
    item->setText(0, address);
    item->setText(1, value);
    list->addTopLevelItem(item);
    return item;
}

CyInfoMemoryLayout::~CyInfoMemoryLayout() {
    delete memtitle;
    delete memlist;
}
