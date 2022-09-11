/**

	@file      DebugConsoleLogger.h
	@brief     Debug Console logger.
	@details   ~
	@author    Marcin Siemiñski
	@date      3.09.2022
	@copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#pragma once
#include "../Logger/Logger.h"

namespace LoggerLibrary
{
	/**

		@class   DebugConsoleLogger
		@brief   DebugConsole logger.
		@details ~

	**/
	class DebugConsoleLogger : public Logger
	{
	public:
		DebugConsoleLogger() = default;

	protected:
		void CreateLogEntry(LogMessage* log_message) override;

	};
}
