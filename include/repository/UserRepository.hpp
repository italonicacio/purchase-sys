
#pragma once

#include <string>
#include <memory>

#include "User.hpp"
#include "error/ErrorUserRepository.hpp"
#include "DTO/UserCreateInput.hpp"

struct ResultUserRepository {
    std::shared_ptr<User> user;
    ErrorUserRepository error;
};


class UserRepository {

    virtual ResultUserRepository Create(UserCreateInput& data) = 0;
    virtual ResultUserRepository FindById(std::string& id) = 0;
    virtual ResultUserRepository FindByEmail(std::string& email) = 0;

};