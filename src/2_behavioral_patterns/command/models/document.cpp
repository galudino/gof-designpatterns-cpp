#include "document.h"

#include <iostream>

document::document(const char *name) {
    std::cout << "Document::Document(const char*)" << std::endl;
}

void document::open() { std::cout << "Document::Open()" << std::endl; }

void document::paste() { std::cout << "Document::Paste()" << std::endl; }
