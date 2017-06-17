#include "comunication_handler.h"

Comunication_Handler::Comunication_Handler()
{

}

void Comunication_Handler::setConnection(ConnectionManager *value)
{
    connection = value;
}
void Comunication_Handler::sendMessage(){
    std::string str = "{\"command\":\"get_table\", \"name\":\"el nombre\"}";
    send(connection->sock,str.c_str(),str.size(),0);
    connection->readFromSocket();
    react();


}

void Comunication_Handler::react(){
    std::ifstream jsonFile("myFile.json");
    json j;
    jsonFile >> j;
    jsonFile.close();
    std::cout << j.dump() << std::endl;
}
