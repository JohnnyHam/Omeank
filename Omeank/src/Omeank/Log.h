#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Omeank {

	class OKEG_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define OKEG_CORE_TRACE(...)	::Omeank::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define OKEG_CORE_INFO(...)		::Omeank::Log::GetCoreLogger()->info(__VA_ARGS__)
#define OKEG_CORE_WARN(...)		::Omeank::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define OKEG_CORE_ERROR(...)	::Omeank::Log::GetCoreLogger()->error(__VA_ARGS__)
#define OKEG_CORE_FATAL(...)	::Omeank::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define OKEG_TRACE(...)			::Omeank::Log::GetClientLogger()->trace(__VA_ARGS__)
#define OKEG_INFO(...)			::Omeank::Log::GetClientLogger()->info(__VA_ARGS__)
#define OKEG_WARN(...)			::Omeank::Log::GetClientLogger()->warn(__VA_ARGS__)
#define OKEG_ERROR(...)			::Omeank::Log::GetClientLogger()->error(__VA_ARGS__)
#define OKEG_FATAL(...)			::Omeank::Log::GetClientLogger()->fatal(__VA_ARGS__)

