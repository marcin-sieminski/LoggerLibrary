/**

	@file      DebugConsoleLogger.cpp
	@brief     DebugConsoleLogger
	@details   ~
	@author    Marcin Siemiñski
	@date      3.09.2022
	@copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#include "DebugConsoleLogger.h"
#include "../LogMessage.h"

void LoggerLibrary::DebugConsoleLogger::CreateLogEntry(LoggerLibrary::LogMessage* log_message)
{
	if (level <= log_message->GetMessagePriority())
	{
		std::time_t current_time = std::time(0);
		std::tm* timestamp = std::localtime(&current_time);

		CThreadSafe thread_safe;
		thread_safe.lock();

		std::strftime(buffer, 80, timestamp_format, timestamp);
		std::string output = (std::string)buffer + "\t[" + log_message->GetMessagePriorityDescription() + "]" + "\t" + log_message->GetMessageText() + "\n";
		std::wstring stemp = std::wstring(output.begin(), output.end());
		LPCWSTR outputMessage = stemp.c_str();
		OutputDebugStringW(outputMessage);

		thread_safe.unlock();
	}
}
