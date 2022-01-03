#ifndef PROGRAM_NODE_H
#define PROGRAM_NODE_H

#include <utility>

class code_generator;

class program_node {
public:
    // program node manipulation
    virtual std::pair<int, int> source_position() const {
        return std::make_pair(0, 0);
    }
    // ...

    // child manipulation
    virtual void add(program_node *node) {}
    virtual void remove(program_node *node) {}
    // ...

    virtual void traverse(code_generator &cg) {}

protected:
    program_node() {}
};

#endif /* PROGRAM_NODE_H */
