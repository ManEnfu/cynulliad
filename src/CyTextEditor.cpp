#include "CyTextEditor.h"

CyTextEditor::CyTextEditor(QWidget* parent) {
    this->init();
}

void CyTextEditor::init() {
    title = new QLabel("Assembly Code");
    text = new QTextEdit();
    // Add to layout
    this->addWidget(title);
    this->addWidget(text);
}

CyTextEditor::~CyTextEditor() {
    delete title;
    delete text;
}
