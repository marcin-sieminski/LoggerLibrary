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
			@brief update method
		**/
		void update();

	private:
		static unsigned int client_id;
		ServerNetwork* network;
	};

}
