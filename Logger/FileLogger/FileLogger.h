/**

	@file      FileLogger.h
	@brief     File logger.
	@details   ~
	@author    Marcin Siemiñski
	@date      3.09.2022
	@copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#pragma once
#include "../Logger/Logger.h"

namespace LoggerLibrary
{
	/**

		@class   FileLogger
		@brief   File logger.
		@details ~

	**/
	class FileLogger : public Logger
	{
	private:
		const char* filepath = 0;
		std::FILE* file = 0;

	public:
		/**
			@brief  EnableFileOutput method
			@retval  - true if file output enabled
		**/
		bool EnableFileOutput();

		/**
			@brief EnableFileOutput method with new file path
			@param  new_filepath - new file path
			@retval              - true if file output enabled
		**/
		bool EnableFileOutput(const char* new_filepath);

		/**
			@brief  GetFilepath method
			@retval  - File path
		**/
		const char* GetFilepath();

		/**
			@brief  IsFileOutputEnabled method
			@retval  - true if file output enabled
		**/
		bool IsFileOutputEnabled();

		/**
			@brief FileLogger object destructor
		**/
		~FileLogger();

	private:
		/**
			@brief	Enable file output method
			@retval  - true if file output enabled
		**/
		bool enable_file_output();

		/**
			@brief	Free file method
		**/
		void free_file();

	protected:
		void CreateLogEntry(LogMessage* log_message) override;

	};
}
