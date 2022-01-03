#ifndef PARSER_H
#define PARSER_H

class program_node_builder;

class parser {
public:
    parser() {}
    virtual ~parser() {}

    virtual void parse(scanner &sc, program_node_builder &builder) {}
};

#endif /* PARSER_H */
