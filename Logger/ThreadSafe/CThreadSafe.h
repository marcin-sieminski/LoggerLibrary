/**

    @file      CThreadSafe.h
    @brief     
    @details   ~
    @author    Marcin Siemiñski
    @date      7.09.2022
    @copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#pragma once
#include <windows.h>

namespace LoggerLibrary
{
	/**

		@class   CThreadSafe
		@brief
		@details ~

	**/
	class CThreadSafe
	{
	public:
		/**
			@brief CThreadSafe object constructor
		**/
		CThreadSafe();

		/**
			@brief CThreadSafe object destructor
		**/
		virtual ~CThreadSafe();

		/**
			@brief lock
		**/
		void lock();

		/**
			@brief unlock
		**/
		void unlock();

		/**
			@brief  get lock
			@retval  -
		**/
		CRITICAL_SECTION* getLock() { return &FLock; }
	private:
		CRITICAL_SECTION FLock;
	};
}