#pragma once

#ifdef OKEG_PLATFORM_WINDOWS

extern Omeank::Application* Omeank::CreateApplication();

int main(int argc, char** argv)
{
	Omeank::Log::Init();
	//Omeank::Log::GetCoreLogger()->warn("Initialized CORE Log!");
	OKEG_CORE_WARN("Initialized CORE Log!");
	//Omeank::Log::GetClientLogger()->info("Welcome to Omeank world!");
	OKEG_INFO("Welcome to Omeank world!");

	auto app = Omeank::CreateApplication();
	app->Run();
	delete app;
}


#endif