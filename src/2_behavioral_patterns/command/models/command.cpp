#include "command.h"

#include <iostream>

command::command() { std::cout << "Command::Command()" << std::endl; }

command::~command() { std::cout << "Command::~Command()" << std::endl; }
