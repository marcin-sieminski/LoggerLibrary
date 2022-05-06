#pragma once
#ifndef LOGGER_H
#define LOGGER_H
#include <fstream>
#include <iostream>
#include <string>

#define LOGGER Logger::GetLogger()

namespace logger
{
	class Logger
	{
	public:
		void Log(const std::string& sMessage);
		void Log(const char* format, ...);

		void Error(const std::string& sMessage);
		void Warning(const std::string& sMessage);
		void Info(const std::string& sMessage);

		Logger& operator<<(const std::string& sMessage);

		static Logger* GetLogger();

		void SetLevel(int level);

		const int LogLevelError = 0;
		const int LogLevelWarning = 1;
		const int LogLevelInfo = 2;

	private:
		Logger();
		Logger(const Logger&) {};
		static const std::string m_sFileName;
		static Logger* m_pThis;
		static std::ofstream m_Logfile;

		int m_LogLevel = LogLevelInfo;
	};
}

#endif
