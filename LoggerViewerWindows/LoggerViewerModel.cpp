/**

	@file      LoggerViewerModel.cpp
	@brief     LoggerViewerModel
	@details   ~
	@author    Marcin Siemiñski
	@date      3.09.2022
	@copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#include "LoggerViewerModel.h"
#include "FileLogger.h"
#include <fstream>
#include <string>
#include <boost/algorithm/string.hpp>
#include <msclr/marshal.h>

namespace LoggerViewerModel
{
	/**
		@brief  ReadLogFile
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
	void LoggerViewerModel::Log(System::String^ message, LoggerLibrary::Logger::LogLevel loggingLevel, bool enableFileOutput, bool enableNetworkOutput, LoggerLibrary::Logger::LogLevel logMessageLevel)
	{
		LoggerLibrary::FileLogger* logger = new LoggerLibrary::FileLogger();
		msclr::interop::marshal_context oMarshalContext;
		const char* messageInput = oMarshalContext.marshal_as<const char*>(message);
		logger->SetLevel(loggingLevel);

		if (enableFileOutput)
		{
			logger->EnableFileOutput();
			switch (logMessageLevel)
			{
			case LoggerLibrary::Logger::TraceLevel:
				logger->Log("Trace", logMessageLevel, messageInput);
				break;
			case LoggerLibrary::Logger::DebugLevel:
				logger->Log("Debug", logMessageLevel, messageInput);
				break;
			case LoggerLibrary::Logger::InfoLevel:
				logger->Log("Info", logMessageLevel, messageInput);
				break;
			case LoggerLibrary::Logger::WarningLevel:
				logger->Log("Warning", logMessageLevel, messageInput);
				break;
			case LoggerLibrary::Logger::ErrorLevel:
				logger->Log("Error", logMessageLevel, messageInput);
				break;
			case LoggerLibrary::Logger::FatalLevel:
				logger->Log("Fatal", logMessageLevel, messageInput);
				break;
			}
		}


		if (enableNetworkOutput)
		{

		}

	}
}
