#include <vector>
#include "ConsoleLogger/ConsoleLogger.h"
#include "../LogMessage.h"
#include "../LogLevel.h"

using namespace std;
using namespace LoggerLibrary;

int main()
{
	vector<string> messagesToLog;

	messagesToLog.push_back("Log message sent to console # 1");
	messagesToLog.push_back("Log message sent to console # 2");
	messagesToLog.push_back("Log message sent to console # 3");

	ConsoleLogger* logger = new ConsoleLogger();
	logger->SetLevel(TraceLevel);

	for (auto message : messagesToLog)
	{
		LogMessage* logMessage = new LogMessage();
		logMessage->SetMessagePriorityDescription("Trace");
		logMessage->SetMessagePriority(TraceLevel);
		logMessage->SetMessageText(message.c_str());
		logger->Log(logMessage);
	}

	return 0;
}
