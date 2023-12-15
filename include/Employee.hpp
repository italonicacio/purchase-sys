#pragma once

#include "User.hpp"

class Employee : public User
{
private:
    std::string m_password;
    bool m_is_valid;

public:
    Employee(const unsigned int id, const std::string& name, const std::string& password, const bool is_valid = true);
    
    void SetPassword(const std::string& password);
    std::string GetPassword() const;
    

};