/**

	@file      ConsoleLogger.cpp
	@brief     ConsoleLogger
	@details   ~
	@author    Marcin Siemiñski
	@date      3.09.2022
	@copyright © Marcin Siemiñski, 2022. All right reserved.

**/

#include "ConsoleLogger.h"

void LoggerLibrary::ConsoleLogger::CreateLogEntry(LogMessage* log_message)
{
	std::strftime(buffer, 80, timestamp_format, log_message->GetTimestamp());
	std::printf("%s    ", buffer);
	std::printf("[");
	std::printf(log_message->GetMessagePriorityDescription());
	std::printf("]");
	std::printf("\t");
	std::printf(log_message->GetMessageText());
	std::printf("\n");
}
