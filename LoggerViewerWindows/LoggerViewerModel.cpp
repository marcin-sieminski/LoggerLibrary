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

	void LoggerViewerModel::Log(System::String^ message, LoggerLibrary::Logger::LogLevel loggingLevel, bool enableFileOutput, bool enableNetworkOutput, bool enableConsoleOutput, LoggerLibrary::Logger::LogLevel logMessageLevel)
	{

		msclr::interop::marshal_context oMarshalContext;
		const char* messageInput = oMarshalContext.marshal_as<const char*>(message);

		if (enableFileOutput)
		{
			LoggerLibrary::FileLogger* fileLogger = new LoggerLibrary::FileLogger();
			fileLogger->SetLevel(loggingLevel);
			fileLogger->EnableFileOutput();

			switch (logMessageLevel)
			{
			case LoggerLibrary::Logger::TraceLevel:
				fileLogger->Log("Trace", logMessageLevel, messageInput);
				break;
			case LoggerLibrary::Logger::DebugLevel:
				fileLogger->Log("Debug", logMessageLevel, messageInput);
				break;
			case LoggerLibrary::Logger::InfoLevel:
				fileLogger->Log("Info", logMessageLevel, messageInput);
				break;
			case LoggerLibrary::Logger::WarningLevel:
				fileLogger->Log("Warning", logMessageLevel, messageInput);
				break;
			case LoggerLibrary::Logger::ErrorLevel:
				fileLogger->Log("Error", logMessageLevel, messageInput);
				break;
			case LoggerLibrary::Logger::FatalLevel:
				fileLogger->Log("Fatal", logMessageLevel, messageInput);
				break;
			}
		}

		if (enableNetworkOutput)
		{

		}

		if (enableConsoleOutput)
		{
			LoggerLibrary::DebugConsoleLogger* consoleLogger = new LoggerLibrary::DebugConsoleLogger();
			consoleLogger->SetLevel(loggingLevel);

			switch (logMessageLevel)
			{
			case LoggerLibrary::Logger::TraceLevel:
				consoleLogger->Log("Trace", logMessageLevel, messageInput);
				break;
			case LoggerLibrary::Logger::DebugLevel:
				consoleLogger->Log("Debug", logMessageLevel, messageInput);
				break;
			case LoggerLibrary::Logger::InfoLevel:
				consoleLogger->Log("Info", logMessageLevel, messageInput);
				break;
			case LoggerLibrary::Logger::WarningLevel:
				consoleLogger->Log("Warning", logMessageLevel, messageInput);
				break;
			case LoggerLibrary::Logger::ErrorLevel:
				consoleLogger->Log("Error", logMessageLevel, messageInput);
				break;
			case LoggerLibrary::Logger::FatalLevel:
				consoleLogger->Log("Fatal", logMessageLevel, messageInput);
				break;
			}
		}
	}
}
