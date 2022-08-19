#pragma once
#include "Logger.h"

namespace LoggerViewerModel
{
	ref class LoggerViewerModel
	{
	public:
		static System::String^ ReadLogFile();
		static void Log(System::String^ message, const int exceptionId, const char* area, LoggerLibrary::Logger::LogLevel loggingLevel, bool enableFileOutput, bool enableNetworkOutput, LoggerLibrary::Logger::LogLevel logMessageLevel);
	};

}

