/**

    @file      LoggerViewerModel.cpp
    @brief     LoggerViewerModel
    @details   ~
    @author    Marcin Siemiñski
    @date      3.09.2022
    @copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#include "LoggerViewerModel.h"
#include "Logger.h"
#include <fstream>
#include <string>
#include <boost/algorithm/string.hpp>


namespace LoggerViewerModel
{
 /**
     @brief  LoggerViewerModel class.
     @retval  - 
 **/
	System::String^ LoggerViewerModel::ReadLogFile()
	{
		std::ifstream logFile("c:/logs/logger-log.txt");
		std::string logText((std::istreambuf_iterator<char>(logFile)), (std::istreambuf_iterator<char>()));
		std::string newLineInsertedLogText = boost::replace_all_copy(logText, "\n", "\r\n");
		auto text = gcnew System::String(newLineInsertedLogText.data());
		return text;
	}

	void LoggerViewerModel::Log(System::String^ message, const int exceptionId, const char* area, LoggerLibrary::Logger::LogLevel loggingLevel, bool enableFileOutput, bool enableNetworkOutput, LoggerLibrary::Logger::LogLevel logMessageLevel)
	{
		LoggerLibrary::Logger::SetLevel(loggingLevel);

		if (enableFileOutput)
		{
			LoggerLibrary::Logger::EnableFileOutput();
		}
		if (enableNetworkOutput)
		{

		}

		switch (logMessageLevel)
		{
		case LoggerLibrary::Logger::TraceLevel:
			LoggerLibrary::Logger::Trace("Message: %s. Error id: %d. Area: %s.", message, exceptionId, area);
			break;
		case LoggerLibrary::Logger::DebugLevel:
			LoggerLibrary::Logger::Debug("Message: %s. Error id: %d. Area: %s.", message, exceptionId, area);
			break;
		case LoggerLibrary::Logger::InfoLevel:
			LoggerLibrary::Logger::Info("Message: %s. Error id: %d. Area: %s.", message, exceptionId, area);
			break;
		case LoggerLibrary::Logger::WarningLevel:
			LoggerLibrary::Logger::Warning("Message: %s. Error id: %d. Area: %s.", message, exceptionId, area);
			break;
		case LoggerLibrary::Logger::ErrorLevel:
			LoggerLibrary::Logger::Error("Message: %s. Error id: %d. Area: %s.", message, exceptionId, area);
			break;
		case LoggerLibrary::Logger::FatalLevel:
			LoggerLibrary::Logger::Fatal("Message: %s. Error id: %d. Area: %s.", message, exceptionId, area);
			break;
		}
	}
}
