#include <iostream>
#include <memory>
#include <cstdlib>
#include <limits>

#include "App.hpp"
#include "UserManager.hpp"

unsigned int Menu()
{
    unsigned int command;

    system("clear");

    std::cout << "-- -- -- Menu --  --  -- " << std::endl;
    std::cout << "1 - Login "                << std::endl;
    std::cout << "2 - Cadastrar Usuário "    << std::endl;
    std::cout << "0 - Fechar o programa "    << std::endl;

    

    std::cout << "Opção: ";
    if(!(std::cin >> command)) std::cin.clear();

    return command;
}

bool Login(UserManager& manager)
{
    system("clear");


    std::cout << "-- -- -- Login --  --  -- " << std::endl;
}

bool RegisterUser(UserManager& manager)
{
    std::string name;
    std::string password;
    char waiting;
    system("clear");

    std::cout << "-- -- -- Cadastro de Usuário --  --  -- " << std::endl;
    std::cout << "Nome  :  ";
    if(!(std::cin >> name)) std::cin.clear();

    std::cout << "Senha :  ";
    if(!(std::cin >> password)) std::cin.clear();
    std::cin.ignore();

    if(!manager.CreateNewUser(name, password))
    {
        std::cerr << "Erro: Erro ao criar usuário!!!" << std::endl;
        if(!(std::cin >> waiting)) std::cin.clear();

        std::cin.ignore( std::numeric_limits <std::streamsize> ::max(), '\n' );
        
        return false;
    }

    std::cout << "\nUsuário criado com sucesso " << std::endl;

    
    
    std::cin.ignore( std::numeric_limits <std::streamsize> ::max(), '\n' );
    

   

    
    return true;



    
}


void App::Run(int argc, char* argv[])
{
    static constexpr unsigned int EXIT = 0;
    static constexpr unsigned int LOGIN = 1;
    static constexpr unsigned int REGISTER_USER = 2;

    unsigned int command;
    std::unique_ptr<UserManager> manager = std::make_unique<UserManager>();

    while(true)
    {
        system("clear");

        
        command = Menu();

        switch (command)
        {
            case LOGIN:
                Login(*manager);
                break;
        
            case REGISTER_USER:
                RegisterUser(*manager);
                break;

            default:
                break;
        }

        if(command == EXIT) break;


    }
    

}