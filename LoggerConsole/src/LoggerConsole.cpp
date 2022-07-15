#include <string>
#include "Logger.h"
using namespace std;
using namespace logger;

int main()
{
    auto message = "Test log message";
    auto exceptionId = 100;
    auto area = "Main";

    Logger::SetPriority(TraceLevel);

    Logger::Trace("Message: %s. Error id: %d. Area: %s.", message, exceptionId, area);

    return 0;
}
