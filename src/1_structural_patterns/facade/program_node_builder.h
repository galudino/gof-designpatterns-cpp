#ifndef PROGRAM_NODE_BUILDER_H
#define PROGRAM_NODE_BUILDER_H

#include "program_node.h"

class program_node_builder {
public:
    program_node_builder() {}

    virtual program_node *new_variable(const char *variable_name) const {
        return nullptr;
    }

    virtual program_node *new_assignment(program_node *variable,
                                       program_node *expression) const {
        return nullptr;
    }

    virtual program_node *new_return_statement(program_node *value) const {
        return nullptr;
    }

    virtual program_node *new_condition(program_node *condition,
                                      program_node *true_part,
                                      program_node *false_part) const {
        return nullptr;
    }
    // ...

    program_node *root_node() const { return m_node; }

private:
    program_node *m_node = nullptr;
};

#endif /* PROGRAM_NODE_BUILDER_H */
