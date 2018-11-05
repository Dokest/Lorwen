#include <Lorwen.h>


class Sandbox : public Lorwen::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Lorwen::Application* Lorwen::CreateApplication()
{
	return new Sandbox();
}