#pragma once
# define CPDU5THREADSAFE_H
#include <windows.h>

namespace LoggerLibrary
{

	class CLocker
	{
	public:
		CLocker(CRITICAL_SECTION* _l) {
			FLock = _l;
			EnterCriticalSection(FLock);
		}
		virtual ~CLocker() {
			LeaveCriticalSection(FLock);
		}
	private:
		CRITICAL_SECTION* FLock;
	};
}