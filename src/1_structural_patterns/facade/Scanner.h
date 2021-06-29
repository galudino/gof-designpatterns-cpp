#ifndef SCANNER_H
#define SCANNER_H

#include <istream>
#include "Token.h"

class Token;

class Scanner {
public:
    Scanner(std::istream &is) : _inputStream(is) {}
    virtual ~Scanner() {}

    virtual Token &Scan() { return _token; }
    std::istream &inputStream() const { return _inputStream; }

private:
    std::istream &_inputStream;
    Token _token;
};

#endif /* SCANNER_H */
