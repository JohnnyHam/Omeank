#pragma once
#include "Core.h"

namespace Omeank {
	class OKEG_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}
