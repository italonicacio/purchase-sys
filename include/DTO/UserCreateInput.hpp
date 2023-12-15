#pragma once

// Procurar alternativas posteriormente
// De vez incluir o projeto todo, fazer só um simbolismo para o string
#include <string>

struct UserCreateInput {
    std::string& name;
    std::string& email;
    std::string& password_hash;
};