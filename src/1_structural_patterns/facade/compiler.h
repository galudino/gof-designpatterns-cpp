#ifndef COMPILER_H
#define COMPILER_H

#include <istream>
#include "bytecode_stream.h"

class compiler {
public:
    virtual void compile(std::istream &input, bytecode_stream &output);
};

#endif /* COMPILER_H */
