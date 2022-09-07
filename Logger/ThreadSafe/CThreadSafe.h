#pragma once
#include <windows.h>

namespace LoggerLibrary
{
	class CThreadSafe
	{
	public:
		CThreadSafe();
		virtual ~CThreadSafe();
		void lock();
		void unlock();
		CRITICAL_SECTION* getLock() { return &FLock; }
	private:
		CRITICAL_SECTION FLock;
	};
}