#include "expression_node.h"

#include "code_generator.h"
#include "../../2_behavioral_patterns/iterator/models/list_iterator.h"

void expression_node::traverse(code_generator &cg) {
    cg.visit(this);

    list_iterator<program_node *> i(m_children);

    for (i.first(); !i.done(); i.next()) {
        i.current_item()->traverse(cg);
    }
}
