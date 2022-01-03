#include "compiler.h"
#include "scanner.h"

#include "parser.h"
#include "program_node_builder.h"
#include "risc_code_generator.h"

void compiler::compile(std::istream &input, bytecode_stream &output) {
    auto sc = scanner(input);
    auto builder = program_node_builder();
    
    parser parser;

    parser.parse(sc, builder);

    auto generator = risc_code_generator(output);
    auto node = builder.root_node();
    
    node->traverse(generator);
}
