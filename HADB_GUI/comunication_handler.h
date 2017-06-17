#ifndef COMUNICATION_HANDLER_H
#define COMUNICATION_HANDLER_H
#include "connectionmanager.h"
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <fstream>

//#include "json.hpp"
//using json = nlohmann::json;

class Comunication_Handler
{
public:
    Comunication_Handler();
    ConnectionManager* connection;
    void setConnection(ConnectionManager *value);
    void sendMessage(std::string message);
    void receiveMessage();
    void react();
    json lastReceived;
    json getLastReceived() const;
    void setLastReceived(const json &value);
};

#endif // COMUNICATION_HANDLER_H
