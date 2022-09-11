/**

	@file      LoggerViewerModel.h
	@brief     LoggerViewerModel
	@details   ~
	@author    Marcin Siemiñski
	@date      3.09.2022
	@copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#pragma once
#include "../Logger/FileLogger/FileLogger.h"
#include "../Logger/DebugConsoleLogger/DebugConsoleLogger.h"
#include "../LogMessage.h"

namespace LoggerViewerModel
{
	/**

		@class   LoggerViewerModel
		@brief   LoggerViewerModel class
		@details ~

	**/
	ref class LoggerViewerModel
	{
	public:
		/**
			@brief  ReadLogFile
			@retval  -
		**/
		static System::String^ ReadLogFile();

		/**
			@brief Log
			@param message             -
			@param loggingLevel        -
			@param enableFileOutput    -
			@param enableNetworkOutput -
			@param logMessageLevel     -
		**/
		static void Log(System::String^ message, LoggerLibrary::LogLevel loggingLevel, bool enableFileOutput, bool enableNetworkOutput, bool enableConsoleOutput, LoggerLibrary::LogLevel logMessageLevel);

	private:

		static void LoggerViewerModel::SendLogMessageToEnabledLogger(LoggerLibrary::Logger* enabled_logger, const char* messageInput, LoggerLibrary::LogLevel logMessageLevel);
	};

}

