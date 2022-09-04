/**

	@file      FileLogger.h
	@brief     File logger.
	@details   ~
	@author    Marcin Siemi�ski
	@date      3.09.2022
	@copyright � Marcin Siemi�ski, 2022. All right reserved.

**/
#pragma once
#include "Logger.h"

namespace LoggerLibrary
{
	/**

		@class   FileLogger
		@brief   File logger.
		@details ~

	**/
	class FileLogger : public Logger
	{
	private:
		const char* filepath = 0;
		std::FILE* file = 0;

	public:
		/**
			@brief  EnableFileOutput method
			@retval  - true if file output enabled
		**/
		bool EnableFileOutput();

		/**
			@brief EnableFileOutput method with new file path
			@param  new_filepath - new file path
			@retval              - true if file output enabled
		**/
		bool EnableFileOutput(const char* new_filepath);

		/**
			@brief  GetFilepath method
			@retval  - File path
		**/
		const char* GetFilepath();

		/**
			@brief  IsFileOutputEnabled method
			@retval  - true if file output enabled
		**/
		bool IsFileOutputEnabled();

		/**
			@brief FileLogger object destructor
		**/
		~FileLogger();

		/**
			@brief	Log method
			@tparam Args                 - template parameter pack type
			@param  message_priority_str - message priority description
			@param  message_priority     - message priority
			@param  message              - message
		**/
		template<typename... Args>
		void Log(const char* message_priority_str, LogLevel message_priority, const char* message)
		{
			if (level <= message_priority && file)
			{
				std::time_t current_time = std::time(0);
				std::tm* timestamp = std::localtime(&current_time);
				std::strftime(buffer, 80, timestamp_format, timestamp);

				std::fprintf(file, "%s    ", buffer);
				std::fprintf(file, "[");
				std::fprintf(file, message_priority_str);
				std::fprintf(file, "]");
				std::fprintf(file, "\t");
				std::fprintf(file, message);
				std::fprintf(file, "\n");

				free_file();
			}
		}

	private:
		/**
			@brief	Enable file output method
			@retval  - true if file output enabled
		**/
		bool enable_file_output();

		/**
			@brief	Free file method
		**/
		void free_file();
	};
}
