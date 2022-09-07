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
