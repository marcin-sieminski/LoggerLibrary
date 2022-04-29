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
		Logger& operator<<(const std::string& sMessage);
		static Logger* GetLogger();
	private:
		Logger();
		Logger(const Logger&) {};
		static const std::string m_sFileName;
		static Logger* m_pThis;
		static std::ofstream m_Logfile;
	};
}

#endif
