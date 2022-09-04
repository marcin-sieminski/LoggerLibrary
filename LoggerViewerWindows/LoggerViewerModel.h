/**

    @file      LoggerViewerModel.h
    @brief     LoggerViewerModel
    @details   ~
    @author    Marcin Siemiñski
    @date      3.09.2022
    @copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#pragma once
#include "Logger.h"

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
		static System::String^ ReadLogFile();
		static void Log(System::String^ message, LoggerLibrary::Logger::LogLevel loggingLevel, bool enableFileOutput, bool enableNetworkOutput, LoggerLibrary::Logger::LogLevel logMessageLevel);
	};

}

