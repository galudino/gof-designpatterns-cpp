#ifndef OPEN_COMMAND_H
#define OPEN_COMMAND_H

#include "command.h"
#include <string>

class application;

class open_command : public command {
public:
    open_command(application *app) : m_application(app) { }

    void execute() override;
    char *response() const { return m_response; }
protected:
    virtual std::string ask_user();

private:
    application *m_application = nullptr;
    char *m_response = nullptr;
};

#endif // OPEN_COMMAND_H
