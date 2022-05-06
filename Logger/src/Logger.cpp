#include "Logger.h"
#include <cstdarg>
#include"Utilities.h"
using namespace std;
using namespace utilities;

namespace logger
{
	const std::string Logger::m_sFileName = "/Logs/Log.txt";
	Logger* Logger::m_pThis = NULL;
	ofstream Logger::m_Logfile;



	Logger::Logger()
	= default;

	Logger* Logger::GetLogger() {
		if (m_pThis == NULL) {
			m_pThis = new Logger();
			m_Logfile.open(m_sFileName.c_str(), ios::out | ios::app);
		}
		return m_pThis;
	}

	void Logger::Log(const char* format, ...)
	{
		char* sMessage = NULL;
		int nLength = 0;
		va_list args;
		va_start(args, format);
		nLength = _vscprintf(format, args) + 1;
		sMessage = new char[nLength];
		vsprintf_s(sMessage, nLength, format, args);
		m_Logfile << CurrentDateTime() << ":\t";
		m_Logfile << sMessage << "\n";
		va_end(args);

		delete[] sMessage;
	}

	void Logger::Log(const string& sMessage)
	{
		m_Logfile << CurrentDateTime() << ":\t";
		m_Logfile << sMessage << "\n";
	}

	void Logger::Error(const std::string& sMessage)
	{
		if (m_LogLevel >= LogLevelError)
		{
			Log("[ERROR]: " + sMessage);
		}
	}

	void Logger::Warning(const std::string& sMessage)
	{
		if (m_LogLevel >= LogLevelWarning)
		{
			Log("[WARNING]: " + sMessage);
		}
	}

	void Logger::Info(const std::string& sMessage)
	{
		if (m_LogLevel >= LogLevelInfo)
		{
			Log("[INFO]: " + sMessage);
		}
	}

	Logger& Logger::operator<<(const string& sMessage)
	{
		m_Logfile << "\n" << CurrentDateTime() << ":\t";
		m_Logfile << sMessage << "\n";
		return *this;
	}

	void Logger::SetLevel(int level)
	{
		m_LogLevel = level;
	}
}

