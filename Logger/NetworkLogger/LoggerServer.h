/**

    @file      LoggerServer.h
    @brief     LoggerServer
    @details   ~
    @author    Marcin Siemiñski
    @date      8.09.2022
    @copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#pragma once
#include "ServerNetwork.h"
namespace LoggerLibrary
{
	/**

		@class   LoggerServer
		@brief   LoggerServer class
		@details ~

	**/
	class LoggerServer
	{
	public:
		/**
			@brief LoggerServer object constructor
		**/
		LoggerServer(void);
		/**
			@brief LoggerServer object destructor
		**/
		~LoggerServer(void);

		/**
			@brief Accepts new clients that are trying to connect and assigns them the current client_id and increment if the ID is assigned to them to prepare for the next client.
		**/
		void update();

	private:

		static unsigned int client_id; //!< IDs for the clients connecting for table in ServerNetwork 

		ServerNetwork* network; //!< The ServerNetwork object 
	};

}
