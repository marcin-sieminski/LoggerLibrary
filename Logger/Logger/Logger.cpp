/**

	@file      Logger.cpp
	@brief     Logger implementation.
	@details   ~
	@author    Marcin Siemiñski
	@date      3.09.2022
	@copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#include "Logger.h"
#include "../LogMessage.h"
using namespace std;

void LoggerLibrary::Logger::SetLevel(LogLevel new_level)
{
	level = new_level;
}

LoggerLibrary::LogLevel LoggerLibrary::Logger::GetPriority()
{
	return level;
}

void LoggerLibrary::Logger::SetTimestampFormat(const char* new_timestamp_format)
{
	timestamp_format = new_timestamp_format;
}

const char* LoggerLibrary::Logger::GetTimestampFormat()
{
	return timestamp_format;
}

void LoggerLibrary::Logger::Log(LogMessage* log_message)
{
	if (level <= log_message->GetMessagePriority())
	{
		CThreadSafe thread_safe;
		thread_safe.lock();

		CreateLogEntry(log_message);

		thread_safe.unlock();
	}
}
void LoggerLibrary::Logger::CreateLogEntry(LogMessage* log_message)
{

}