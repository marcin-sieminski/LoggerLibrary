/**

    @file      NetworkLogger.h
    @brief     Network logger.
    @details   ~
    @author    Marcin Siemi�ski
    @date      3.09.2022
    @copyright � Marcin Siemi�ski, 2022. All right reserved.

**/
#pragma once
#include "Logger.h"
#define ASIO_STANDALONE
#include <asio.hpp>
#include <asio/ts/buffer.hpp>
#include <asio/ts/internet.hpp>

namespace LoggerLibrary
{
 /**

     @class   NetworkLogger
     @brief   Network logger.
     @details ~

 **/
	class NetworkLogger : public Logger
	{
		
	};
}
