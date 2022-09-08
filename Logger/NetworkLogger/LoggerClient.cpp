/**

    @file      LoggerClient.cpp
    @brief     Logger client
    @details   ~
    @author    Marcin Siemiñski
    @date      7.09.2022
    @copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#include "LoggerClient.h"

LoggerLibrary::LoggerClient::LoggerClient(void)
{
    network = new ClientNetwork();
}