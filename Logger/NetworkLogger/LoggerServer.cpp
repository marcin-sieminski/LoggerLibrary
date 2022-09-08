/**

    @file      LoggerServer.cpp
    @brief     LoggerServer
    @details   ~
    @author    Marcin Siemiñski
    @date      8.09.2022
    @copyright © Marcin Siemiñski, 2022. All right reserved.

**/

#include "LoggerServer.h"

unsigned int LoggerLibrary::LoggerServer::client_id;

LoggerLibrary::LoggerServer::LoggerServer(void)
{
	client_id = 0;
	network = new ServerNetwork();
};

void LoggerLibrary::LoggerServer::update()
{
	if (network->acceptNewClient(client_id))
	{
		printf("client %d has been connected to the server\n", client_id);

		client_id++;
	}
}