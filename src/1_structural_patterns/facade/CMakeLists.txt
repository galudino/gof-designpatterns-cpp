include_directories(../../3_foundation_classes)
include_directories(../../2_behavioral_patterns/iterator)

set(facade_src
    BytecodeStream.h
    CodeGenerator.h
    Compiler.h
    Compiler.cpp
    ExpressionNode.h
    ExpressionNode.cpp
    Parser.h
    ProgramNode.h
    ProgramNodeBuilder.h
    RISCCodeGenerator.h
    Scanner.h
    StackMachineCodeGenerator.h
    StatementNode.h
    Token.h
)

add_library(facade_lib SHARED ${facade_src})

add_executable(facade main.cpp)
target_link_libraries(facade LINK_PUBLIC facade_lib)
