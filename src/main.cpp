#include <iostream>
#include "App.hpp"
#include <memory>


int main(int argc, char* argv[])
{
    std::unique_ptr<App> app = std::make_unique<App>();

    try
    {
        app->Run();
    }
    catch(const std::exception& exception)
    {
        std::cerr << exception.what() << std::endl;
    }
    
    return 0;
}