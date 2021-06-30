#include "decorator.h"

decorator::decorator(visual_component *component) : m_component(component) {}

void decorator::draw() { m_component->draw(); }

void decorator::resize() { m_component->resize(); }
