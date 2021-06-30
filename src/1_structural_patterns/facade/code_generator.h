#ifndef CODE_GENERATOR_H
#define CODE_GENERATOR_H

class statement_node;
class expression_node;
class bytecode_stream;

class code_generator {
public:
    virtual void visit(statement_node *) {}
    virtual void visit(expression_node *) {}
    // ...
protected:
    code_generator(bytecode_stream &bs) : m_output(bs) {}

protected:
    bytecode_stream &m_output;
};

#endif /* CODE_GENERATOR_H */
