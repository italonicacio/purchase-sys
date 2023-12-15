#include "User.hpp"

User::User()
    : m_id{0}
    , m_name{""}
{}

User::User(const unsigned int id, const std::string& name)
    : m_id{id}
    , m_name{name}
{}
void User::SetName(std::string& name)
{
    m_name = name;
}

std::string User::GetName() const
{
    return m_name;
}

unsigned int User::GetId() const
{
    return m_id;
}


