/**

	@file      ConsoleLogger.h
	@brief     Console logger.
	@details   ~
	@author    Marcin Siemiñski
	@date      3.09.2022
	@copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#pragma once
#include "../Logger/Logger.h"
#include "../LogMessage.h"
#include <ctime>

namespace LoggerLibrary
{
	/**

		@class   ConsoleLogger
		@brief   Console logger.
		@details ~

	**/
	class ConsoleLogger : public Logger
	{
	public:
		/**
			@brief ConsoleLogger object constructor
		**/
		ConsoleLogger() = default;

		void CreateLogEntry(LogMessage* log_message) override;

	};
}
