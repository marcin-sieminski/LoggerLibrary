/**

	@file      Logger.h
	@brief     Logger header file.
	@details   ~
	@author    Marcin Siemiñski
	@date      3.09.2022
	@copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#pragma once
#include "../ThreadSafe/CThreadSafe.h"
#include "../LogLevel.h"
#include <string>
#include <cstdio>
/**
	@namespace LoggerLibrary
	@brief     Logger Library namespace.
**/
namespace LoggerLibrary
{
	class LogMessage;
	/**

		@class   Logger
		@brief   Logger class.
		@details ~

	**/
	class Logger : public CThreadSafe
	{
	protected:
		LoggerLibrary::LogLevel level = InfoLevel;
		char buffer[80];
		const char* timestamp_format = "%T  %d-%m-%Y";

		/**
			@brief Creates log entry
			@param log_message -
		**/
		virtual void CreateLogEntry(LogMessage* log_message);

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

		/**
			@brief Log method to log log message
			@param log_message - log message
		**/
		virtual void Log(LogMessage* log_message);

	};
}
