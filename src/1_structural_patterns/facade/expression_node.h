#ifndef EXPRESSION_NODE_H
#define EXPRESSION_NODE_H

#include "program_node.h"
//#include "list.h"

template <class Item>
class list;

class expression_node : public program_node {
public:
    void traverse(code_generator &cg);
    void add(program_node *) {}
    void remove(program_node *) {}

protected:
    list<program_node *> *m_children;
};

#endif /* EXPRESSION_NODE_H */
