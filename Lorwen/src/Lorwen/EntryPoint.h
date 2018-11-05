#pragma once

#ifdef LW_PLATFORM_WINDOWS

extern Lorwen::Application* Lorwen::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Lorwen::CreateApplication();
	app->Run();
	delete app;

}
#endif