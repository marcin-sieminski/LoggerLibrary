/**

	@file      ClientNetwork.h
	@brief     ClientNetwork header
	@details   ~
	@author    Marcin Siemiñski
	@date      6.09.2022
	@copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#pragma once
#include <winsock2.h>
#include <Windows.h>
#include "NetworkService.h"
#include <ws2tcpip.h>
#include <stdio.h>

/**
	@def   DEFAULT_BUFLEN
	@brief size of buffer
**/
#define DEFAULT_BUFLEN 512
/**
	@def   DEFAULT_PORT
	@brief port to connect sockets through
**/
#define DEFAULT_PORT "6881"

#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")

namespace LoggerLibrary
{
	/**

		@class   ClientNetwork
		@brief   ClientNetwork class
		@details ~

	**/
	class ClientNetwork
	{
	public:
		//!< for error checking function calls in Winsock library
		int iResult;

		//!< socket for client to connect to server
		SOCKET ConnectSocket;

		/**
			@brief ClientNetwork object constructor
		**/
		ClientNetwork(void);
		/**
			@brief ClientNetwork object destructor
		**/
		~ClientNetwork(void);
	};

}
