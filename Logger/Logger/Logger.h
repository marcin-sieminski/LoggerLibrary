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
		/**
			@brief Logger object constructor
		**/
		Logger() {}

		/**
			@brief Logger object constructor
			@param  -
		**/
		Logger(const Logger&) = delete;

		/**
			@brief  operator=
			@param   - const Logger&
			@retval  - this object reference
		**/
		Logger& operator= (const Logger&) = delete;

		/**
			@brief Logger object destructor
		**/
		~Logger() {}

		/**
			@brief	Set Level
			@param new_level - log level
		**/
		void SetLevel(LogLevel new_level);

		/**
			@brief	GetPriority
			@retval  - LogLevel
		**/
		LogLevel GetPriority();

		/**
			@brief	SetTimestampFormat
			@param new_timestamp_format - new_timestamp_format
		**/
		void SetTimestampFormat(const char* new_timestamp_format);

		/**
			@brief GetTimestampFormat
			@retval  - const char*
		**/
		const char* GetTimestampFormat();



	protected:
		template<typename... Args>
		void log(const char* message_priority_str, LogLevel message_priority, const char* message, Args... args);

		template<typename... Args>
		void log(int line_number, const char* source_file, const char* message_priority_str, LogLevel message_priority, const char* message, Args... args);
	};
}
