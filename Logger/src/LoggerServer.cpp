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