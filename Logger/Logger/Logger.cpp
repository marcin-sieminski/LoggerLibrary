/**

	@file      Logger.cpp
	@brief     Logger implementation.
	@details   ~
	@author    Marcin Siemiñski
	@date      3.09.2022
	@copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#include "Logger.h"
using namespace std;

namespace LoggerLibrary
{
	void Logger::SetLevel(LogLevel new_level)
	{
		level = new_level;
	}

	Logger::LogLevel Logger::GetPriority()
	{
		return level;
	}

	void Logger::SetTimestampFormat(const char* new_timestamp_format)
	{
		timestamp_format = new_timestamp_format;
	}

	const char* Logger::GetTimestampFormat()
	{
		return timestamp_format;
	}

}
