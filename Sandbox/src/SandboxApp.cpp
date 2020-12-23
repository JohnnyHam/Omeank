#include <Omeank.h>


class Sandbox : public Omeank::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Omeank::Application* Omeank::CreateApplication()
{
	return new Sandbox();
}