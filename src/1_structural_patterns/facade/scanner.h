#ifndef SCANNER_H
#define SCANNER_H

#include <istream>
#include "token.h"

class token;

class scanner {
public:
    scanner(std::istream &is) : m_input_stream(is) {}
    virtual ~scanner() {}

    virtual token &scan() { return m_token; }
    std::istream &input_stream() const { return m_input_stream; }

private:
    std::istream &m_input_stream;
    token m_token;
};

#endif /* SCANNER_H */
