/**

	@file      LogLevel.h
	@brief     LogLevel enum declaration
	@details   ~
	@author    Marcin Siemi�ski
	@date      10.09.2022
	@copyright � Marcin Siemi�ski, 2022. All right reserved.

**/
#pragma once
namespace LoggerLibrary
{
	/**
		@enum  LoggerLibrary::LogLevel
		@brief Log level enum.
	**/
	enum LogLevel
	{
		TraceLevel, DebugLevel, InfoLevel, WarningLevel, ErrorLevel, FatalLevel
	};
}
