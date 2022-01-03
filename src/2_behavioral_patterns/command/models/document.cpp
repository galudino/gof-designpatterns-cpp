#include "document.h"

#include <iostream>

document::document(const char *name) {
    std::cout << "document::document(const char *name)" << std::endl;
}

document::document(const std::string &name) {
    std::cout << "document::document(const std::string &name)" << std::endl;
}

void document::open() { std::cout << "document::open()" << std::endl; }

void document::paste() { std::cout << "document::paste()" << std::endl; }
