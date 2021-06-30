#ifndef COMPILER_H
#define COMPILER_H

#include <istream>
#include "bytecode_stream.h"

class compiler {
public:
    compiler();

    virtual void compile(std::istream &, bytecode_stream &);
};

#endif /* COMPILER_H */
