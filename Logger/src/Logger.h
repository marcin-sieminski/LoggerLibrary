#pragma once

#include <stdio.h>
#include <mutex>

namespace logger
{

	enum LogLevel
	{
		TraceLevel, DebugLevel, InfoLevel, WarningLevel, ErrorLevel, FatalLevel
	};

	class Logger
	{
	private:
		static std::mutex log_mutex;
		static LogLevel level;

	public:
		static void SetPriority(LogLevel newLevel)
		{
			level = newLevel;
		}

		template<typename... Args>
		static void Trace(const char* message, Args... args)
		{
			if (level <= TraceLevel)
			{
				std::scoped_lock lock(log_mutex);
				printf("[Trace]\t");
				printf(message, args...);
				printf("\n");
			}
		}
		template<typename... Args>
		static void Debug(const char* message, Args... args)
		{
			if (level <= DebugLevel)
			{
				std::scoped_lock lock(log_mutex);
				printf("[Debug]\t");
				printf(message, args...);
				printf("\n");
			}
		}

		template<typename... Args>
		static void Info(const char* message, Args... args)
		{
			if (level <= InfoLevel)
			{
				std::scoped_lock lock(log_mutex);
				printf("[Info]\t");
				printf(message, args...);
				printf("\n");
			}
		}

		template<typename... Args>
		static void Warning(const char* message, Args... args)
		{
			if (level <= WarningLevel)
			{
				std::scoped_lock lock(log_mutex);
				printf("[Warn]\t");
				printf(message, args...);
				printf("\n");
			}
		}

		template<typename... Args>
		static void Error(const char* message, Args... args)
		{
			if (level <= ErrorLevel)
			{
				std::scoped_lock lock(log_mutex);
				printf("[Error]\t");
				printf(message, args...);
				printf("\n");
			}
		}

		template<typename... Args>
		static void Fatal(const char* message, Args... args)
		{
			if (level <= FatalLevel)
			{
				std::scoped_lock lock(log_mutex);
				printf("[Critical]\t");
				printf(message, args...);
				printf("\n");
			}
		}

	};

	LogLevel Logger::level = TraceLevel;
	std::mutex Logger::log_mutex;

}
