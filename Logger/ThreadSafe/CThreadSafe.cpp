/**

    @file      CThreadSafe.cpp
    @brief     CThreadSafe
    @details   ~
    @author    Marcin Siemiñski
    @date      7.09.2022
    @copyright © Marcin Siemiñski, 2022. All right reserved.

**/

#include "CThreadSafe.h"

LoggerLibrary::CThreadSafe::CThreadSafe()
{
	InitializeCriticalSection(&FLock);
}

LoggerLibrary::CThreadSafe::~CThreadSafe() {
	DeleteCriticalSection(&FLock);
}

void LoggerLibrary::CThreadSafe::lock() {
	EnterCriticalSection(&FLock);
}

void LoggerLibrary::CThreadSafe::unlock() {
	LeaveCriticalSection(&FLock);
}
