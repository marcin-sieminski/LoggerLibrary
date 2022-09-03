/**

    @file      Logger.h
    @brief     Logger header file.
    @details   ~
    @author    Marcin Siemiñski
    @date      3.09.2022
    @copyright © Marcin Siemiñski, 2022. All right reserved.

**/
#pragma once
#pragma warning(disable : 4996)
#include <string>
#include <cstdio>
#include <ctime>
/**
    @namespace LoggerLibrary
    @brief     Logger Library namespace.
**/
namespace LoggerLibrary
{
 /**

     @class   Logger
     @brief   Logger class.
     @details ~

 **/
	class Logger
	{
	public:
  /**
      @enum  LoggerLibrary::Logger::LogLevel
      @brief Log level enum.
  **/
		enum LogLevel
		{
			TraceLevel, DebugLevel, InfoLevel, WarningLevel, ErrorLevel, FatalLevel
		};

	private:
		LogLevel level = InfoLevel;
		const char* filepath = 0;
		std::FILE* file = 0;
		char buffer[80];
		const char* timestamp_format = "%T  %d-%m-%Y";
	public:
		static void SetLevel(LogLevel new_level)
		{
			get_instance().level = new_level;
		}

		static LogLevel GetPriority()
		{
			return get_instance().level;
		}

		static bool EnableFileOutput()
		{
			Logger& logger_instance = get_instance();
			logger_instance.filepath = "c:/logs/logger-log.txt";
			return logger_instance.enable_file_output();
		}

		static bool EnableFileOutput(const char* new_filepath)
		{
			Logger& logger_instance = get_instance();
			logger_instance.filepath = new_filepath;
			return logger_instance.enable_file_output();
		}

		static const char* GetFilepath()
		{
			return get_instance().filepath;
		}

		static bool IsFileOutputEnabled()
		{
			return get_instance().file != 0;
		}

		static void SetTimestampFormat(const char* new_timestamp_format)
		{
			get_instance().timestamp_format = new_timestamp_format;
		}

		static const char* GetTimestampFormat()
		{
			return get_instance().timestamp_format;
		}

		template<typename... Args>
		static void Trace(const char* message, Args... args)
		{
			get_instance().log("[Trace]    ", TraceLevel, message, args...);
		}

		template<typename... Args>
		static void Debug(const char* message, Args... args)
		{
			get_instance().log("[Debug]    ", DebugLevel, message, args...);
		}

		template<typename... Args>
		static void Info(const char* message, Args... args)
		{
			get_instance().log("[Info]     ", InfoLevel, message, args...);
		}

		template<typename... Args>
		static void Warning(const char* message, Args... args)
		{
			get_instance().log("[Warn]     ", WarningLevel, message, args...);
		}

		template<typename... Args>
		static void Error(const char* message, Args... args)
		{
			get_instance().log("[Error]    ", ErrorLevel, message, args...);
		}

		template<typename... Args>
		static void Fatal(const char* message, Args... args)
		{
			get_instance().log("[Crit]     ", FatalLevel, message, args...);
		}

		template<typename... Args>
		static void Trace(int line, const char* source_file, const char* message, Args... args)
		{
			get_instance().log(line, source_file, "[Trace]\t", TraceLevel, message, args...);
		}

		template<typename... Args>
		static void Debug(int line, const char* source_file, const char* message, Args... args)
		{
			get_instance().log(line, source_file, "[Debug]\t", DebugLevel, message, args...);
		}

		template<typename... Args>
		static void Info(int line, const char* source_file, const char* message, Args... args)
		{
			get_instance().log(line, source_file, "[Info]\t", InfoLevel, message, args...);
		}

		template<typename... Args>
		static void Warning(int line, const char* source_file, const char* message, Args... args)
		{
			get_instance().log(line, source_file, "[Warn]\t", WarningLevel, message, args...);
		}

		template<typename... Args>
		static void Error(int line, const char* source_file, const char* message, Args... args)
		{
			get_instance().log(line, source_file, "[Error]\t", ErrorLevel, message, args...);
		}

		template<typename... Args>
		static void Fatal(int line, const char* source_file, const char* message, Args... args)
		{
			get_instance().log(line, source_file, "[Critical]\t", FatalLevel, message, args...);
		}

	private:
		Logger() {}

		Logger(const Logger&) = delete;
		Logger& operator= (const Logger&) = delete;

		~Logger()
		{
			free_file();
		}

		static Logger& get_instance()
		{
			static Logger instance;

			return instance;
		}

		template<typename... Args>
		void log(const char* message_priority_str, LogLevel message_priority, const char* message, Args... args)
		{
			if (level <= message_priority)
			{
				std::time_t current_time = std::time(0);
				std::tm* timestamp = std::localtime(&current_time);

				std::strftime(buffer, 80, timestamp_format, timestamp);
				std::printf("%s    ", buffer);
				std::printf(message_priority_str);
				std::printf(message, args...);
				std::printf("\n");

				if (file)
				{
					std::fprintf(file, "%s    ", buffer);
					std::fprintf(file, message_priority_str);
					std::fprintf(file, message, args...);
					std::fprintf(file, "\n");
				}
			}
		}

		template<typename... Args>
		void log(int line_number, const char* source_file, const char* message_priority_str, LogLevel message_priority, const char* message, Args... args)
		{
			if (level <= message_priority)
			{
				std::time_t current_time = std::time(0);
				std::tm* timestamp = std::localtime(&current_time);
				char buffer[80];
				strftime(buffer, 80, "%c", timestamp);

				printf("%s\t", buffer);
				printf(message_priority_str);
				printf(message, args...);
				printf(" on line %d in %s", line_number, source_file);
				printf("\n");

				if (file)
				{
					fprintf(file, "%s\t", buffer);
					fprintf(file, message_priority_str);
					fprintf(file, message, args...);
					fprintf(file, " on line %d in %s", line_number, source_file);
					fprintf(file, "\n");
				}
			}
		}

		bool enable_file_output()
		{
			free_file();

			file = std::fopen(filepath, "a");

			if (file == 0)
			{
				return false;
			}

			return true;
		}

		void free_file()
		{
			if (file)
			{
				std::fclose(file);
				file = 0;
			}
		}
	};

#define LOG_TRACE(Message, ...) (Logger::Trace(__LINE__, __FILE__, Message, __VA_ARGS__))
#define LOG_DEBUG(Message, ...) (Logger::Debug(__LINE__, __FILE__, Message, __VA_ARGS__))
#define LOG_INFO(Message, ...) (Logger::Info(__LINE__, __FILE__, Message, __VA_ARGS__))
#define LOG_WARN(Message, ...) (Logger::Warning(__LINE__, __FILE__, Message, __VA_ARGS__))
#define LOG_ERROR(Message, ...) (Logger::Error(__LINE__, __FILE__, Message, __VA_ARGS__))
#define LOG_CRITICAL(Message, ...) (Logger::Fatal(__LINE__, __FILE__, Message, __VA_ARGS__))
}
