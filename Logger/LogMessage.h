/**

	@file      LogMessage.h
	@brief     LogMessage class
	@details   ~
	@author    Marcin Siemiñski
	@date      10.09.2022
	@copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#pragma once
#pragma warning(disable : 4996)
#include "LogLevel.h"
#include <ctime>

namespace LoggerLibrary
{

	/**

		@class   LogMessage
		@brief   LogMessage class
		@details ~

	**/
	class LogMessage
	{
	public:
		/**
			@brief LogMessage object constructor
		**/
		LogMessage();

		/**
			@brief LogMessage object constructor
		**/
		LogMessage(const char* messagePriorityDescription, LogLevel messagePriority, const char* messageText);

		/**
			@brief LogMessage object destructor
		**/
		~LogMessage() {  }

		/**
			@brief Sets Message Priority Description
			@param messagePriorityDescription - Message Priority Description
		**/
		void SetMessagePriorityDescription(const char* messagePriorityDescription);

		/**
			@brief  Gets Message Priority Description
			@retval  - Message Priority Description
		**/
		const char* GetMessagePriorityDescription();

		/**
			@brief Sets Message Priority
			@param messagePriority - Message Priority
		**/
		void SetMessagePriority(LogLevel messagePriority);

		/**
			@brief  Gets Message Priority
			@retval  - Message Priority
		**/
		LogLevel GetMessagePriority();

		/**
			@brief Sets Message Text
			@param messageText - Message Text
		**/
		void SetMessageText(const char* messageText);

		/**
			@brief  Gets Message Text
			@retval  - Message Text
		**/
		const char* GetMessageText();

		/**
			@brief  Gets timestamp
			@retval  -
		**/
		std::tm* GetTimestamp();

	private:
		const char* message_priority_str;
		LogLevel message_priority;
		const char* message;
		std::time_t current_time;
		std::tm* timestamp;
	};
}
