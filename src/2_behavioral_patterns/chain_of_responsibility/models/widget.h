#ifndef WIDGET_H
#define WIDGET_H

#include "help_handler.h"

class widget : public help_handler {
protected:
    widget(widget *parent, topic t = topic::NO_HELP_TOPIC);

private:
    widget *m_parent = nullptr;
};

#endif /* WIDGET_H */
