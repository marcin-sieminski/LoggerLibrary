/**

	@file      Logger.h
	@brief     Logger header file.
	@details   ~
	@author    Marcin Siemiñski
	@date      3.09.2022
	@copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#pragma once
#pragma warning(disable : 4996)
#include <string>
#include <cstdio>
#include <ctime>
/**
	@namespace LoggerLibrary
	@brief     Logger Library namespace.
**/
namespace LoggerLibrary
{
	/**

		@class   Logger
		@brief   Logger class.
		@details ~

	**/
	class Logger
	{
	public:
		/**
			@enum  LoggerLibrary::Logger::LogLevel
			@brief Log level enum.
		**/
		enum LogLevel
		{
			TraceLevel, DebugLevel, InfoLevel, WarningLevel, ErrorLevel, FatalLevel
		};

	protected:
		LogLevel level = InfoLevel;
		char buffer[80];
		const char* timestamp_format = "%T  %d-%m-%Y";

	public:
		Logger() {}
		Logger(const Logger&) = delete;
		Logger& operator= (const Logger&) = delete;
		~Logger() {}


		void SetLevel(LogLevel new_level)
		{
			level = new_level;
		}

		LogLevel GetPriority()
		{
			return level;
		}

		void SetTimestampFormat(const char* new_timestamp_format)
		{
			timestamp_format = new_timestamp_format;
		}

		const char* GetTimestampFormat()
		{
			return timestamp_format;
		}

		template<typename... Args>
		static void Trace(const char* message, Args... args)
		{
			log("[Trace]    ", TraceLevel, message, args...);
		}

		template<typename... Args>
		static void Debug(const char* message, Args... args)
		{
			log("[Debug]    ", DebugLevel, message, args...);
		}

		template<typename... Args>
		static void Info(const char* message, Args... args)
		{
			log("[Info]     ", InfoLevel, message, args...);
		}

		template<typename... Args>
		static void Warning(const char* message, Args... args)
		{
			log("[Warn]     ", WarningLevel, message, args...);
		}

		template<typename... Args>
		static void Error(const char* message, Args... args)
		{
			log("[Error]    ", ErrorLevel, message, args...);
		}

		template<typename... Args>
		static void Fatal(const char* message, Args... args)
		{
			log("[Crit]     ", FatalLevel, message, args...);
		}

		template<typename... Args>
		static void Trace(int line, const char* source_file, const char* message, Args... args)
		{
			log(line, source_file, "[Trace]\t", TraceLevel, message, args...);
		}

		template<typename... Args>
		static void Debug(int line, const char* source_file, const char* message, Args... args)
		{
			log(line, source_file, "[Debug]\t", DebugLevel, message, args...);
		}

		template<typename... Args>
		static void Info(int line, const char* source_file, const char* message, Args... args)
		{
			log(line, source_file, "[Info]\t", InfoLevel, message, args...);
		}

		template<typename... Args>
		static void Warning(int line, const char* source_file, const char* message, Args... args)
		{
			log(line, source_file, "[Warn]\t", WarningLevel, message, args...);
		}

		template<typename... Args>
		static void Error(int line, const char* source_file, const char* message, Args... args)
		{
			log(line, source_file, "[Error]\t", ErrorLevel, message, args...);
		}

		template<typename... Args>
		static void Fatal(int line, const char* source_file, const char* message, Args... args)
		{
			log(line, source_file, "[Critical]\t", FatalLevel, message, args...);
		}


	protected:
		template<typename... Args>
		void log(const char* message_priority_str, LogLevel message_priority, const char* message, Args... args);

		template<typename... Args>
		void log(int line_number, const char* source_file, const char* message_priority_str, LogLevel message_priority, const char* message, Args... args);
	};

#define LOG_TRACE(Message, ...) (Logger::Trace(__LINE__, __FILE__, Message, __VA_ARGS__))
#define LOG_DEBUG(Message, ...) (Logger::Debug(__LINE__, __FILE__, Message, __VA_ARGS__))
#define LOG_INFO(Message, ...) (Logger::Info(__LINE__, __FILE__, Message, __VA_ARGS__))
#define LOG_WARN(Message, ...) (Logger::Warning(__LINE__, __FILE__, Message, __VA_ARGS__))
#define LOG_ERROR(Message, ...) (Logger::Error(__LINE__, __FILE__, Message, __VA_ARGS__))
#define LOG_CRITICAL(Message, ...) (Logger::Fatal(__LINE__, __FILE__, Message, __VA_ARGS__))
}
