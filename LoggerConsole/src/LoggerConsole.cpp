#include <string>
#include "Logger.h"
using namespace std;
using namespace logger;

int main()
{
    string message1 = "message 1 ...";
    string message2 = "message 2 ...";
    int    nNum = 10;
    Logger::GetLogger()->Log("message to be logged");
    Logger::GetLogger()->Log(message1);
    LOGGER->Log(" Message is:%s Number is:%d", message2.c_str(), nNum);
    LOGGER->SetLevel(level_error);

    return 0;
}
