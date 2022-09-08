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
		/**
			@brief  Log method.
			@param  message_priority_str - message priority description
			@param  message_priority     - message priority enum
			@param  message              - log message
			@param args
		**/
		template<typename... Args>
		void Log(const char* message_priority_str, LogLevel message_priority, const char* message, Args... args)
		{
			if (level <= message_priority)
			{
				std::time_t current_time = std::time(0);
				std::tm* timestamp = std::localtime(&current_time);

				CThreadSafe thread_safe;
				thread_safe.lock();

				std::strftime(buffer, 80, timestamp_format, timestamp);
				std::string output = (std::string)buffer + "\t[" + message_priority_str + "]" + "\t" + message + "\n";
				std::wstring stemp = std::wstring(output.begin(), output.end());
				LPCWSTR outputMessage = stemp.c_str();
				OutputDebugStringW(outputMessage);

				thread_safe.unlock();
			}
		}
	};
}
