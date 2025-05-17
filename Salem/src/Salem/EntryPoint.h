#pragma once

#ifdef SL_PLATFORM_WINDOWS

extern Salem::Application* Salem::CreateApplication();

int main(int argc, char** argv)
{
    auto app = Salem::CreateApplication();
    app->Run();
    delete app;
}

#endif