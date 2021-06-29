#ifndef PROGRAM_NODE_BUILDER_H
#define PROGRAM_NODE_BUILDER_H

#include "ProgramNode.h"

class ProgramNodeBuilder {
public:
    ProgramNodeBuilder() {}

    virtual ProgramNode *NewVariable(const char *variableName) const {
        return nullptr;
    }

    virtual ProgramNode *NewAssignment(ProgramNode *variable,
                                       ProgramNode *expression) const {
        return nullptr;
    }

    virtual ProgramNode *NewReturnStatement(ProgramNode *value) const {
        return nullptr;
    }

    virtual ProgramNode *NewCondition(ProgramNode *condition,
                                      ProgramNode *truePart,
                                      ProgramNode *falsePart) const {
        return nullptr;
    }
    // ...

    ProgramNode *GetRootNode() { return _node; }

private:
    ProgramNode *_node;
};

#endif /* PROGRAM_NODE_BUILDER_H */
