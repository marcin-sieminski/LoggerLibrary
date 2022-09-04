/**

	@file      FileLogger.h
	@brief     File logger.
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
		bool EnableFileOutput()
		{
			filepath = "c:/logs/logger-log.txt";
			return enable_file_output();
		}

		bool EnableFileOutput(const char* new_filepath)
		{
			filepath = new_filepath;
			return enable_file_output();
		}

		const char* GetFilepath()
		{
			return filepath;
		}

		bool IsFileOutputEnabled()
		{
			return file != 0;
		}

		~FileLogger()
		{
			free_file();
		}
	
		template<typename... Args>
		void Log(const char* message_priority_str, LogLevel message_priority, const char* message, Args... args)
		{
			if (level <= message_priority && file)
			{
				std::time_t current_time = std::time(0);
				std::tm* timestamp = std::localtime(&current_time);
				std::strftime(buffer, 80, timestamp_format, timestamp);

				std::fprintf(file, "%s    ", buffer);
				std::fprintf(file, message_priority_str);
				std::fprintf(file, "\t");
				std::fprintf(file, message, args...);
				std::fprintf(file, "\n");
			}
		}

	private:
		bool enable_file_output()
		{
			free_file();
			file = std::fopen(filepath, "a");
			if (file == 0)
			{
				return false;
			}
			return true;
		}

		void free_file()
		{
			if (file)
			{
				std::fclose(file);
				file = 0;
			}
		}
	};
}
