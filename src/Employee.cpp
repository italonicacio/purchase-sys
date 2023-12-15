#include "Employee.hpp"

Employee::Employee(const unsigned int id, const std::string& name, const std::string& password, const bool is_valid)
    : User{id, name}
    , m_password{m_password}
    , m_is_valid{is_valid}
{}
    
void Employee::SetPassword(const std::string& password)
{
    m_password = password;
}

std::string Employee::GetPassword() const
{
    return m_password;
}