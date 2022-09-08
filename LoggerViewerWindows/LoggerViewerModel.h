/**

	@file      LoggerViewerModel.h
	@brief     LoggerViewerModel
	@details   ~
	@author    Marcin Siemi�ski
	@date      3.09.2022
	@copyright � Marcin Siemi�ski, 2022. All right reserved.

**/
#pragma once
#include "../Logger/FileLogger/FileLogger.h"
#include "../Logger/DebugConsoleLogger/DebugConsoleLogger.h"

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
			@param exceptionId         -
			@param area                -
			@param loggingLevel        -
			@param enableFileOutput    -
			@param enableNetworkOutput -
			@param logMessageLevel     -
		**/
		static void Log(System::String^ message, LoggerLibrary::Logger::LogLevel loggingLevel, bool enableFileOutput, bool enableNetworkOutput, bool enableConsoleOutput, LoggerLibrary::Logger::LogLevel logMessageLevel);
	};

}

