#include <vector>
#include "ConsoleLogger/ConsoleLogger.h"
using namespace std;
using namespace LoggerLibrary;

int main()
{
	vector<string> messagesToLog;

	messagesToLog.push_back("Log message sent to console # 1");
	messagesToLog.push_back("Log message sent to console # 2");
	messagesToLog.push_back("Log message sent to console # 3");

	ConsoleLogger* logger = new ConsoleLogger();
	logger->SetLevel(ConsoleLogger::TraceLevel);

	for (auto message : messagesToLog)
	{
		logger->Log("Trace", ConsoleLogger::TraceLevel, message.c_str());
	}

	return 0;
}
