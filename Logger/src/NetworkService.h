/**

	@file      NetworkService.h
	@brief     Network service
	@details   ~
	@author    Marcin Siemiñski
	@date      5.09.2022
	@copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#pragma once
#include <winsock2.h>
#include <Windows.h>

namespace LoggerLibrary
{
	/**

	@class   NetworkService
	@brief   NetworkService class
	@details ~

	**/
	class NetworkService
	{
	public:
		/**
			@brief  Sends message.
			@param  curSocket   - current socket
			@param  message     - message
			@param  messageSize - message size
			@retval             - an int value representing the number of bytes it successfully sent or an error value 
		**/
		static int sendMessage(SOCKET curSocket, char* message, int messageSize);

		/**
			@brief  Receives message
			@param  curSocket - current socket
			@param  buffer    - message
			@param  bufSize   - message size
			@retval           - an int value representing the number of bytes it read into our buffer or an error 
		**/
		static int receiveMessage(SOCKET curSocket, char* buffer, int bufSize);
	};

}

