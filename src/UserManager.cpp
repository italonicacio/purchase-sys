#include <iostream>

#include "UserManager.hpp"

UserManager::UserManager()
    : m_id_counter{0}
    , m_logged_user_name{""}
    , m_logged_user_password{""}
    , m_logged_user_id{0}
    , m_is_logged{false}

{
   
}

UserManager::UserManager(unsigned int total_users_counter)
    : m_id_counter{total_users_counter}
    , m_logged_user_name{""}
    , m_logged_user_password{""}
    , m_logged_user_id{0}
    , m_is_logged{false}
{
}

bool UserManager::CreateNewUser(const std::string& new_user_name, const std::string& new_user_password)
{
    constexpr bool is_valid = true;

    if(!HasThisUser(new_user_name))
    {
        ++m_id_counter;
        
        m_users[new_user_name] = std::make_shared<Employee>(m_id_counter, new_user_name, new_user_password); 

        return true;

    }

    return false;
}

void UserManager::RegisterNewUser(Employee& new_employee, bool is_valid_employee)
{
    if(!m_users.empty())
    {
        m_users[new_employee.GetName()] = std::make_shared<Employee>(new_employee);
    }
}

bool UserManager::HasThisUser(const std::string user_name) const
{   
    return m_users.count(user_name);
}



bool UserManager::Login(const std::string& user_name, const std::string user_password)
{

}

bool UserManager::Logout()
{

}

bool UserManager::HasLoggedUser()
{

}