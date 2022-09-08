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

		/**
			@brief  Log method.
			@param  message_priority_str - message priority description
			@param  message_priority     - message priority enum
			@param  message              - log message
			@param args	- additional arguments 
		**/
		template<typename... Args>
		void Log(const char* message_priority_str, LogLevel message_priority, const char* message, Args... args)
		{
			if (level <= message_priority)
			{
				std::time_t current_time = std::time(0);
				std::tm* timestamp = std::localtime(&current_time);

				LoggerLibrary::CThreadSafe thread_safe;
				thread_safe.lock();

				std::strftime(buffer, 80, timestamp_format, timestamp);
				std::printf("%s    ", buffer);
				std::printf("[");
				std::printf(message_priority_str);
				std::printf("]");
				std::printf("\t");
				std::printf(message, args...);
				std::printf("\n");

				thread_safe.unlock();
			}
		}

	};
}
