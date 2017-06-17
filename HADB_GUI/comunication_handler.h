#ifndef COMUNICATION_HANDLER_H
#define COMUNICATION_HANDLER_H
#include "connectionmanager.h"
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <fstream>

class Comunication_Handler
{
public:
    Comunication_Handler();
    ConnectionManager* connection;
    void setConnection(ConnectionManager *value);
    void sendMessage();
    void receiveMessage();
    void react();
};

#endif // COMUNICATION_HANDLER_H
