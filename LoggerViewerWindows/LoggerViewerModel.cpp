/**

	@file      LoggerViewerModel.cpp
	@brief     LoggerViewerModel
	@details   ~
	@author    Marcin Siemiñski
	@date      3.09.2022
	@copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#include "LoggerViewerModel.h"
#include "../Logger/FileLogger/FileLogger.h"
#include <fstream>
#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>
#include <msclr/marshal.h>

namespace LoggerViewerModel
{
	System::String^ LoggerViewerModel::ReadLogFile()
	{
		std::ifstream logFile("c:/logs/default_log.txt");
		std::string logText((std::istreambuf_iterator<char>(logFile)), (std::istreambuf_iterator<char>()));
		std::string newLineInsertedLogText = boost::replace_all_copy(logText, "\n", "\r\n");
		auto text = gcnew System::String(newLineInsertedLogText.data());
		return text;
	}

	void LoggerViewerModel::Log(System::String^ message, LoggerLibrary::LogLevel loggingLevel, bool enableFileOutput, bool enableNetworkOutput, bool enableConsoleOutput, LoggerLibrary::LogLevel logMessageLevel)
	{
		msclr::interop::marshal_context oMarshalContext;
		const char* messageInput = oMarshalContext.marshal_as<const char*>(message);
		std::vector<LoggerLibrary::Logger*> enabledLoggers;

		if (enableFileOutput)
		{
			LoggerLibrary::FileLogger* fileLogger = new LoggerLibrary::FileLogger();
			fileLogger->SetLevel(loggingLevel);
			fileLogger->EnableFileOutput();
			enabledLoggers.push_back(fileLogger);
		}

		if (enableConsoleOutput)
		{
			LoggerLibrary::DebugConsoleLogger* consoleLogger = new LoggerLibrary::DebugConsoleLogger();
			consoleLogger->SetLevel(loggingLevel);
			enabledLoggers.push_back(consoleLogger);
		}

		for (auto enabled_logger : enabledLoggers)
		{
			SendLogMessageToEnabledLogger(enabled_logger, messageInput, logMessageLevel);
		}
	}

	void LoggerViewerModel::SendLogMessageToEnabledLogger(LoggerLibrary::Logger* enabled_logger, const char* messageInput, LoggerLibrary::LogLevel logMessageLevel)
	{
		LoggerLibrary::LogMessage* logMessage = new LoggerLibrary::LogMessage;
		logMessage->SetMessageText(messageInput);
		logMessage->SetMessagePriority(logMessageLevel);

		switch (logMessageLevel)
		{
		case LoggerLibrary::LogLevel::TraceLevel:
			logMessage->SetMessagePriorityDescription("Trace");
			break;
		case LoggerLibrary::LogLevel::DebugLevel:
			logMessage->SetMessagePriorityDescription("Debug");
			break;
		case LoggerLibrary::LogLevel::InfoLevel:
			logMessage->SetMessagePriorityDescription("Info");
			break;
		case LoggerLibrary::LogLevel::WarningLevel:
			logMessage->SetMessagePriorityDescription("Warning");
			break;
		case LoggerLibrary::LogLevel::ErrorLevel:
			logMessage->SetMessagePriorityDescription("Error");
			break;
		case LoggerLibrary::LogLevel::FatalLevel:
			logMessage->SetMessagePriorityDescription("Fatal");
			break;
		}

		enabled_logger->Log(logMessage);
	}
}

