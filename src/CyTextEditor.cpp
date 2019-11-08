#include "CyTextEditor.h"

CyTextEditor::CyTextEditor(QWidget* parent) {
    this->init();
}

void CyTextEditor::init() {
    title = new QLabel("Assembly Code");
    text = new QTextEdit();
    runbutton = new QPushButton("Run");
    // Add to layout
    this->addWidget(title);
    this->addWidget(text);
    this->addWidget(runbutton);
}

CyTextEditor::~CyTextEditor() {
    delete title;
    delete text;
    delete runbutton;
}
