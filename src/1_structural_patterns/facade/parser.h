#ifndef PARSER_H
#define PARSER_H

class program_node_builder;

class parser {
public:
    parser() {}
    virtual ~parser() {}

    virtual void parse(scanner &, program_node_builder &) {}
};

#endif /* PARSER_H */
