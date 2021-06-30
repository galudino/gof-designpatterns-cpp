include_directories(../2_behavioral_patterns/iterator/models)
include_directories(../3_foundation_classes)

set(facade_src
    bytecode_stream.h
    code_generator.h
    compiler.h
    compiler.cpp
    expression_node.h
    expression_node.cpp
    parser.h
    program_node.h
    program_node_builder.h
    risc_code_generator.h
    scanner.h
    stack_machine_code_generator.h
    statement_node.h
    token.h
)

add_library(facade_lib SHARED ${facade_src})

add_executable(facade main.cpp)
target_link_libraries(facade LINK_PUBLIC facade_lib)
