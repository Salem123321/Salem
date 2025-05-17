#pragma once

#include "Core.h"

namespace Salem
{
    class SALEM_API Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    // To be defined in CLIENT
    Application* CreateApplication();
}
