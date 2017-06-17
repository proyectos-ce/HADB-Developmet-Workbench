#ifndef CONNECTIONMANAGER_H
#define CONNECTIONMANAGER_H
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>

#include "json.hpp"
using json = nlohmann::json;


#define PORT 8888


class ConnectionManager {
public:
    ConnectionManager(std::string ip, int port);
    void readFromSocket();
    void actFromJSONFile();
    void identify();
    int sock = 0, valread;
    char buffer[1024*10] = {0};


    json getLastReceived() const;
    void setLastReceived(const json &value);

private:
    json lastReceived;
    struct sockaddr_in address;

    struct sockaddr_in serv_addr;
    //char *hello = "Hello from client";


};
#endif // CONNECTIONMANAGER_H
