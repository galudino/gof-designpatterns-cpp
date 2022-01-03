#ifndef EXPRESSION_NODE_H
#define EXPRESSION_NODE_H

#include "program_node.h"
//#include "list.h"

template <typename T>
class list;

class expression_node : public program_node {
public:
    void traverse(code_generator &cg) override;
    void add(program_node *node) override {}
    void remove(program_node *node) override {}

protected:
    list<program_node *> *m_children = nullptr;
};

#endif /* EXPRESSION_NODE_H */
