#ifndef PROGRAM_NODE_BUILDER_H
#define PROGRAM_NODE_BUILDER_H

#include "program_node.h"

class program_node_builder {
public:
    program_node_builder() {}

    virtual program_node *NewVariable(const char *variableName) const {
        return nullptr;
    }

    virtual program_node *NewAssignment(program_node *variable,
                                       program_node *expression) const {
        return nullptr;
    }

    virtual program_node *NewReturnStatement(program_node *value) const {
        return nullptr;
    }

    virtual program_node *NewCondition(program_node *condition,
                                      program_node *truePart,
                                      program_node *falsePart) const {
        return nullptr;
    }
    // ...

    program_node *GetRootNode() { return _node; }

private:
    program_node *_node;
};

#endif /* PROGRAM_NODE_BUILDER_H */
