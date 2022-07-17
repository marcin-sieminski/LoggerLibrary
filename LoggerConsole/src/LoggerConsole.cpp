#include "Logger.h"
#include "Utilities.h"
using namespace std;
using namespace LoggerLibrary;
using namespace Utilities;

int main()
{
    auto message = "Test";
    auto exceptionId = 100;
    auto area = "Main";

    Logger::SetLevel(Logger::TraceLevel);

    Logger::Trace("Message: %s. Error id: %d. Area: %s.", message, exceptionId, area);

    LOG_INFO(message, area);

    return 0;
}
