#pragma once

#include <map>
#include <string>
#include <memory>

#include "Employee.hpp"

class CompareEmployee
{
    bool operator()(Employee& e1, Employee& e2)
    {
        return e1.GetId() == e2.GetId();
    }
};

class UserManager
{

private:
    unsigned int m_id_counter;

    std::string m_logged_user_name;
    std::string m_logged_user_password;
    unsigned int m_logged_user_id;
    bool m_is_logged;

    std::map<std::string, std::shared_ptr<Employee>> m_users;


public:

    UserManager();
    UserManager(unsigned int total_users_counter);
    bool CreateNewUser(const std::string& new_user_name, const std::string& new_user_password);
    void RegisterNewUser(Employee& new_employee, bool is_valid_employee);
    bool HasThisUser(const std::string user_name) const ;
    bool Login(const std::string& user_name, const std::string user_password);
    bool Logout();
    bool HasLoggedUser();

};
