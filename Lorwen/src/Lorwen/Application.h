#pragma once

#include "Core.h"

namespace Lorwen {

	class LORWEN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}