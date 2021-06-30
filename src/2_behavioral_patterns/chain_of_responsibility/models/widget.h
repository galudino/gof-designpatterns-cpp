#ifndef WIDGET_H
#define WIDGET_H

#include "help_handler.h"

class widget : public help_handler {
protected:
    widget(widget *parent, topic t = NO_HELP_TOPIC);

private:
    widget *m_parent;
};

#endif /* WIDGET_H */
