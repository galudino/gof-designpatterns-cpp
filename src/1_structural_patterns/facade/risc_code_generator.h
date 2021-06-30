#ifndef RISC_CODE_GENERATOR_H
#define RISC_CODE_GENERATOR_H

#include "code_generator.h"

class bytecode_stream;
class statement_node;
class expression_node;

class risc_code_generator : public code_generator {
public:
    risc_code_generator(bytecode_stream &bs) : code_generator(bs) {}
    virtual void visit(statement_node *) {}
    virtual void visit(expression_node *) {}
    // ...
};

#endif /* RISC_CODE_GENERATOR_H */
