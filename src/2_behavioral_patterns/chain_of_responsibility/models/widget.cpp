#include "widget.h"
#include "help_handler.h"

widget::widget(widget *w, topic t) : help_handler(w, t) { m_parent = w; }
