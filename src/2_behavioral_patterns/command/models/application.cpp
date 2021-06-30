#include "application.h"

#include <iostream>

class document;

void application::add(document *doc) {
    std::cout << "Application::Add(Document*)" << std::endl;
}
