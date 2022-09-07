/**

    @file      CLocker.h
    @brief     
    @details   ~
    @author    Marcin Siemiñski
    @date      7.09.2022
    @copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#pragma once
# define CPDU5THREADSAFE_H
#include <windows.h>

namespace LoggerLibrary
{
	/**

		@class   CLocker
		@brief
		@details ~

	**/
	class CLocker
	{
	public:
		/**
			@brief CLocker object constructor
			@param _l -
		**/
		CLocker(CRITICAL_SECTION* _l) {
			FLock = _l;
			EnterCriticalSection(FLock);
		}

		/**
			@brief CLocker object destructor
		**/
		virtual ~CLocker() {
			LeaveCriticalSection(FLock);
		}
	private:

		CRITICAL_SECTION* FLock;
	};
}