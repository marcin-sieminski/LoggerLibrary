#include "ConsoleLogger/ConsoleLogger.h"
using namespace std;
using namespace LoggerLibrary;

int main()
{
    auto message = "Test log message sent to console";
    auto exceptionId = 001;
    auto area = "Console";

    ConsoleLogger* logger = new ConsoleLogger();
    logger->SetLevel(ConsoleLogger::TraceLevel);
	logger->Log("Trace", ConsoleLogger::TraceLevel, message);

    return 0;
}
