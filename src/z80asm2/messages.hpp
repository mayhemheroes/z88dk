// File generated by messages.pl, do not edit

#ifndef MESSAGES_HPP
#define MESSAGES_HPP

#include "message_handler.hpp"

// information and error messages channels
extern stlplus::message_handler g_messages;
extern stlplus::message_handler g_errors;

// message ids
extern const char *MES_COPYRIGHT;
extern const char *MES_USAGE;
extern const char *MES_HELP;
extern const char *ERR_CMD_LINE_ARGS;

// setup messages
extern void init_messages();

#endif
