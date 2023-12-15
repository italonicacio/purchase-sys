#pragma once

#include "UserRepository.hpp"

class InMemoryUserRepository : UserRepository {

    ResultUserRepository Create(UserCreateInput& data) override;
    ResultUserRepository FindById(std::string& id) override;
    ResultUserRepository FindByEmail(std::string& email) override;
};