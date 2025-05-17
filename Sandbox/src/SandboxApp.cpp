#include <cstdio>

#include "Salem.h"

class Sandbox : public Salem::Application
{
public:
    Sandbox()
    {
    }

    ~Sandbox()
    {
    }
};

Salem::Application* Salem::CreateApplication()
{
    return new Sandbox();
}