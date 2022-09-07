#include <iostream>

#include "App.hpp"

App::App()
{
    unsigned int command;

    while(true)
    {
        std::cout << "Digite 0 para sair" << std::endl; 

        std::cin >> command;
    }
    
}