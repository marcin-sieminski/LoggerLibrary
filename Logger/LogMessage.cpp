#include "LogMessage.h"

LoggerLibrary::LogMessage::LogMessage()
{
	current_time = std::time(0);
	timestamp = std::localtime(&current_time);
}

LoggerLibrary::LogMessage::LogMessage(const char* messagePriorityDescription, LogLevel messagePriority, const char* messageText) : LogMessage()
{
	message_priority_str = messagePriorityDescription;
	message_priority = messagePriority;
	message = messageText;
}


void LoggerLibrary::LogMessage::SetMessagePriorityDescription(const char* messagePriorityDescription)
{
	message_priority_str = messagePriorityDescription;
}

const char* LoggerLibrary::LogMessage::GetMessagePriorityDescription()
{
	return message_priority_str;
}

void LoggerLibrary::LogMessage::SetMessagePriority(LoggerLibrary::LogLevel messagePriority)
{
	message_priority = messagePriority;
}

LoggerLibrary::LogLevel LoggerLibrary::LogMessage::GetMessagePriority()
{
	return message_priority;
}

void LoggerLibrary::LogMessage::SetMessageText(const char* messageText)
{
	message = messageText;
}

const char* LoggerLibrary::LogMessage::GetMessageText()
{
	return message;
}

std::tm* LoggerLibrary::LogMessage::GetTimestamp()
{
	return timestamp;
}
