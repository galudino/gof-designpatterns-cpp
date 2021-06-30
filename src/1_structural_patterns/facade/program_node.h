#ifndef PROGRAM_NODE_H
#define PROGRAM_NODE_H

class code_generator;

class program_node {
public:
    // program node manipulation
    virtual void GetSourcePosition(int &line, int &index) {}
    // ...

    // child manipulation
    virtual void add(program_node *) {}
    virtual void remove(program_node *) {}
    // ...

    virtual void traverse(code_generator &) {}

protected:
    program_node() {}
};

#endif /* PROGRAM_NODE_H */
