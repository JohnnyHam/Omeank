#pragma once

#ifdef OKEG_PLATFORM_WINDOWS

extern Omeank::Application* Omeank::CreateApplication();

int main(int argc, char** argv)
{
	auto sandbox = Omeank::CreateApplication();
	sandbox->Run();
	delete sandbox;
}


#endif