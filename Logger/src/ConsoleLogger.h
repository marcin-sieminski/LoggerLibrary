/**

	@file      ConsoleLogger.h
	@brief     Console logger.
	@details   ~
	@author    Marcin Siemiñski
	@date      3.09.2022
	@copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#pragma once
#include "Logger.h"

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
		ConsoleLogger() = default;
  /**
      @brief  Log method.
      @tparam Args                 - template parameter pack type
      @param  message_priority_str - message priority description
      @param  message_priority     - message priority enum
      @param  message              - log message
      @param  args                 - template parameter pack
  **/
		template<typename... Args>
		void Log(const char* message_priority_str, LogLevel message_priority, const char* message, Args... args)
		{
			if (level <= message_priority)
			{
				std::time_t current_time = std::time(0);
				std::tm* timestamp = std::localtime(&current_time);

				std::strftime(buffer, 80, timestamp_format, timestamp);
				std::printf("%s    ", buffer);
				std::printf(message_priority_str);
				std::printf("\t");
				std::printf(message, args...);
				std::printf("\n");
			}
		}
	};	
}
