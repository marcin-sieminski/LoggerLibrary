/**

	@file      LoggerClient.h
	@brief     LoggerClient
	@details   ~
	@author    Marcin Siemiñski
	@date      7.09.2022
	@copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#pragma once
#include <winsock2.h>
#include <Windows.h>
#include "ClientNetwork.h"
namespace LoggerLibrary
{
	/**

		@class   LoggerClient
		@brief   LoggerClient class
		@details ~

	**/
	class LoggerClient
	{
	public:
		/**
			@brief LoggerClient object constructor
		**/
		LoggerClient();

		/**
			@brief LoggerClient object destructor
		**/
		~LoggerClient(void);

		ClientNetwork* network;
	};

}
