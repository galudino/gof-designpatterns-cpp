#include "compiler.h"
#include "scanner.h"

#include "parser.h"
#include "program_node_builder.h"
#include "risc_code_generator.h"

void compiler::compile(std::istream &input, bytecode_stream &output) {
    scanner sc(input);
    program_node_builder builder;
    parser parser;

    parser.parse(sc, builder);

    risc_code_generator generator(output);
    program_node *node = builder.GetRootNode();
    node->traverse(generator);
}
