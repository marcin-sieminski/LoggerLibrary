#pragma once
#ifndef LOGGER_H
#define LOGGER_H
#include <fstream>
#include <iostream>
#include <string>

#include "Logger.h"

#define LOGGER Logger::GetLogger()

namespace logger
{
	enum level
	{
		level_error, level_warning, level_info
	};

	class Logger
	{
	public:
		void Log(const std::string& sMessage);
		void Log(const char* format, ...);

		void LogError(const std::string& sMessage);
		void LogWarning(const std::string& sMessage);
		void LogInfo(const std::string& sMessage);


		Logger& operator<<(const std::string& sMessage);

		static Logger* GetLogger();

		void SetLevel(level level);

		const int LogLevelError = 0;
		const int LogLevelWarning = 1;
		const int LogLevelInfo = 2;

	private:
		Logger();
		Logger(const Logger&) {};
		static const std::string m_sFileName;
		static Logger* m_pThis;
		static std::ofstream m_Logfile;

		level m_LogLevel;
	};
}

#endif
