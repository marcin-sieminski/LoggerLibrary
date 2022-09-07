/**

	@file      FileLogger.cpp
	@brief     FileLogger
	@details   ~
	@author    Marcin Siemiński
	@date      4.09.2022
	@copyright © Marcin Siemiński, 2022. All right reserved.

**/
#include "FileLogger.h"

namespace LoggerLibrary
{
	bool FileLogger::EnableFileOutput()
	{
		filepath = "c:/logs/default_log.txt";
		return enable_file_output();
	}

	bool FileLogger::EnableFileOutput(const char* new_filepath)
	{
		filepath = new_filepath;
		return enable_file_output();
	}

	const char* FileLogger::GetFilepath()
	{
		return filepath;
	}

	bool FileLogger::IsFileOutputEnabled()
	{
		return file != 0;
	}

	FileLogger::~FileLogger()
	{
		free_file();
	}


	bool FileLogger::enable_file_output()
	{
		free_file();
		file = std::fopen(filepath, "a");
		if (file == 0)
		{
			return false;
		}
		return true;
	}

	void FileLogger::free_file()
	{
		if (file)
		{
			std::fclose(file);
			file = 0;
		}
	}

}
