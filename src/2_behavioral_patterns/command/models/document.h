#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>

class document {
public:
    document(const char *name);
    document(const std::string &name);
    
    void open();
    void paste();
};

#endif // DOCUMENT_H
