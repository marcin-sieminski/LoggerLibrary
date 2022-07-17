#include <string>
#include "Logger.h"
using namespace std;

int main()
{
    auto message = "Test log message";
    auto exceptionId = 100;
    auto area = "Main";

    Logger::SetLevel(Logger::TraceLevel);

    Logger::Trace("Message: %s. Error id: %d. Area: %s.", message, exceptionId, area);

    return 0;
}
