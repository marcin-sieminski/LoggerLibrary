#pragma once
#include <winsock2.h>
#include <Windows.h>
#include <ws2tcpip.h>
#include <map>
using namespace std;
#pragma comment (lib, "Ws2_32.lib")

#define DEFAULT_BUFLEN 512
#define DEFAULT_PORT "6881" 

namespace LoggerLibrary
{
	/**

		@class   ServerNetwork
		@brief   ServerNetwork class
		@details ~

	**/
	class ServerNetwork
	{
	public:
		/**
			@brief ServerNetwork object constructor
		**/
		ServerNetwork(void);
		/**
			@brief ServerNetwork object destructor
		**/
		~ServerNetwork(void);

		//!< Socket to listen for new connections
		SOCKET ListenSocket;

		//!< Socket to give to the clients
		SOCKET ClientSocket;

		//!< for error checking return values
		int iResult;

		//!< table to keep track of each client's socket
		std::map<unsigned int, SOCKET> sessions;

		/**
			@brief Accept new connection
			@param  id -
			@retval    -
		**/
		bool acceptNewClient(unsigned int& id);

	};

}

